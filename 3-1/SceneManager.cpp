#include "SceneManager.h"
#include <stdio.h>

SceneManager::SceneManager() {

}

SceneManager::~SceneManager() {

}

SceneManager* SceneManager::GetInstance() {

	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene() {
	while (1) {
		int input = 1;
		printf("sceneNo: %d\n", sceneNo);

		switch (sceneNo) {
		case 0:
			printf("Title\n");
			break;
		case 1:
			printf("NewGame\n");
			break;
		case 2:
			printf("GamePlay\n");
			break;
		case 3:
			printf("GameClear\n");
			break;
		}
		if (sceneNo <= 2) {
			sceneNo++;
		}
		else {
			sceneNo = 0;
		}
		while (input != 0)
		{
			printf("Press [0]key Scene Change\n");
			scanf_s("%d", &input);
		}
	}
}