#pragma once


class SceneManager final {
private:
	/// <summary>
	/// �R���X�g�N���^
	/// </summary>
	SceneManager();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~SceneManager();
public:
	// �R�s�[�R���X�g���N�^�𖳌��ɂ���
	SceneManager(const SceneManager& obj) = delete;
	// ������Z�q�𖳌��ɂ���
	SceneManager& operator=(const SceneManager& obj) = delete;

	void ChangeScene();

	/// <summary>
	/// �V�[���؂�ւ�
	/// </summary>
	static SceneManager* GetInstance();
private:
	int sceneNo = 0;
};