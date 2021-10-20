using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour {
    public int damage;
    public float acceleration = 0;
    public float firedAngle;
    public float rootDuration = 0;
    private Rigidbody2D r;
    public enum Behavior { Break, Linger }
    public Behavior behavior = Behavior.Break;

    private void Start() {
        r = GetComponent<Rigidbody2D>();
        if (acceleration > 0) {
            StartCoroutine(RampUpSpeed());
        }
    }
    
    private IEnumerator RampUpSpeed() {
        while (true) {
            yield return new WaitForSeconds(0.1f);
            r.velocity += new Vector2(
                Mathf.Cos(firedAngle) * acceleration,
                Mathf.Sin(firedAngle) * acceleration
            );
        }
    }
    
    private void OnTriggerEnter2D(Collider2D other) {
        GameObject g = other.gameObject;
        switch (g.name) {
            case "enemy(Clone)":
                g.GetComponent<Enemy>().ChangeHealthBy(damage);
                StartCoroutine(g.GetComponent<Enemy>().RootForDuration(rootDuration));
                break;
            case ("player"):
                g.GetComponent<Player>().ChangeHealthBy(damage);
                break;
            case "test":
                break;
        }
        if (g.name is "enemy(Clone)" or "player") {
            switch (behavior) {
                case Behavior.Linger: break;
                case Behavior.Break: Destroy(gameObject); break;
                default: throw new ArgumentOutOfRangeException();
            }
        }
    }
}
