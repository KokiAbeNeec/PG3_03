#pragma once


class SceneManager final {
private:
	/// <summary>
	/// コンストクラタ
	/// </summary>
	SceneManager();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~SceneManager();
public:
	// コピーコンストラクタを無効にする
	SceneManager(const SceneManager& obj) = delete;
	// 代入演算子を無効にする
	SceneManager& operator=(const SceneManager& obj) = delete;

	void ChangeScene();

	/// <summary>
	/// シーン切り替え
	/// </summary>
	static SceneManager* GetInstance();
private:
	int sceneNo = 0;
};