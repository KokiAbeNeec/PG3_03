#include "Enemy.h"
#include <stdio.h>


int main()
{
	Enemy enemy;
	int input;

	while (true)
	{
		printf("0:exit 1:continue ==> ");
		scanf_s("%d", &input);
		if (input == 0)break;

		enemy.Update();
	}

	return 0;
}