extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_Tilemap();
	RegisterModule_Tilemap();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class Grid; template <> void RegisterUnityClass<Grid>(const char*);
class GridLayout; template <> void RegisterUnityClass<GridLayout>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; template <> void RegisterUnityClass<CapsuleCollider2D>(const char*);
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class Effector2D; template <> void RegisterUnityClass<Effector2D>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PointEffector2D; template <> void RegisterUnityClass<PointEffector2D>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class Tilemap; template <> void RegisterUnityClass<Tilemap>(const char*);
class TilemapRenderer; template <> void RegisterUnityClass<TilemapRenderer>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 84 non stripped classes
	//0. Animator
	RegisterUnityClass<Animator>("Animation");
	//1. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//2. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//3. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//4. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//5. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//6. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//7. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//8. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//9. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//10. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//11. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//12. Camera
	RegisterUnityClass<Camera>("Core");
	//13. Component
	RegisterUnityClass<Unity::Component>("Core");
	//14. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//15. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//16. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//17. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//18. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//19. GameManager
	RegisterUnityClass<GameManager>("Core");
	//20. GameObject
	RegisterUnityClass<GameObject>("Core");
	//21. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//22. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//23. InputManager
	RegisterUnityClass<InputManager>("Core");
	//24. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//25. Light
	RegisterUnityClass<Light>("Core");
	//26. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//27. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//28. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//29. Material
	RegisterUnityClass<Material>("Core");
	//30. Mesh
	RegisterUnityClass<Mesh>("Core");
	//31. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//32. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//33. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//34. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//35. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//36. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//37. Object
	//Skipping Object
	//38. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//39. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//40. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//41. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//42. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//43. Renderer
	RegisterUnityClass<Renderer>("Core");
	//44. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//45. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//46. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//47. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//48. Shader
	RegisterUnityClass<Shader>("Core");
	//49. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//50. Sprite
	RegisterUnityClass<Sprite>("Core");
	//51. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//52. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//53. TagManager
	RegisterUnityClass<TagManager>("Core");
	//54. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//55. Texture
	RegisterUnityClass<Texture>("Core");
	//56. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//57. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//58. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//59. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//60. Transform
	RegisterUnityClass<Transform>("Core");
	//61. Grid
	RegisterUnityClass<Grid>("Grid");
	//62. GridLayout
	RegisterUnityClass<GridLayout>("Grid");
	//63. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//64. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//65. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//66. Collider
	RegisterUnityClass<Collider>("Physics");
	//67. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//68. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//69. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//70. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//71. CapsuleCollider2D
	RegisterUnityClass<CapsuleCollider2D>("Physics2D");
	//72. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");
	//73. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//74. Effector2D
	RegisterUnityClass<Effector2D>("Physics2D");
	//75. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//76. PointEffector2D
	RegisterUnityClass<PointEffector2D>("Physics2D");
	//77. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//78. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//79. Tilemap
	RegisterUnityClass<Tilemap>("Tilemap");
	//80. TilemapRenderer
	RegisterUnityClass<TilemapRenderer>("Tilemap");
	//81. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//82. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//83. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");

}
