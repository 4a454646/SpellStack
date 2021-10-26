using System;
using System.Collections;
using UnityEngine;

public class Music : MonoBehaviour {
    [SerializeField] private AudioClip[] musicPieces;
    [SerializeField] private string[] musicPieceNames;
    public AudioSource audioSource;
    
    private void Awake() {
        audioSource = GetComponent<AudioSource>();
        musicPieceNames = new string[musicPieces.Length];
        for (int i = 0; i < musicPieces.Length; i++) {
            musicPieceNames[i] = musicPieces[i].name;
        }
        audioSource.volume = 0;
    }
    
    private void Start() {
        
        StartCoroutine(PlayMusic("Karl"));
    }
    
    public IEnumerator PlayMusic(string pieceName) {
        audioSource.clip = musicPieces[Array.IndexOf(musicPieceNames, pieceName)];
        while (true) {
            FadeVolumeIn();
            audioSource.Play();
            yield return new WaitForSeconds(200f);
            FadeVolumeOut();
            yield return new WaitForSeconds(10f);
        }
    }
    
    public void FadeVolumeIn() {
        StartCoroutine(FadeVolumeInCoro()); 
    }
    
    public void FadeVolumeOut() { 
        StartCoroutine(FadeVolumeOutCoro()); 
    }
    
    private IEnumerator FadeVolumeInCoro() { 
        for (int i = 0; i < 5; i++) {
            yield return new WaitForSeconds(0.05f);
            audioSource.volume += 0.01f;
        }
        audioSource.volume = 0.05f;
    }
    
    private IEnumerator FadeVolumeOutCoro() { 
        for (int i = 0; i < 5; i++) {
            yield return new WaitForSeconds(0.05f);
            audioSource.volume -= 0.01f;
        }
        audioSource.volume = 0;
    }
}