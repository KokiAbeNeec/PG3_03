#include "Enemy.h"
#include <stdio.h>



void(Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::GetAway
};

Enemy::Enemy()
{
	phase_ = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Approach()
{
	printf("�ߐ�\n");
}

void Enemy::Shoot()
{
	printf("�ˌ�\n");
}

void Enemy::GetAway()
{
	printf("���E\n");
}

void Enemy::Update()
{
	printf("phase_ : %d\n", phase_);

	(this->*pFuncTable[phase_])();

	phase_++;
	if (phase_ >= 3)
	{
		phase_ = 0;
	}
}

void Enemy::Draw()
{
	printf("(enemy draw)\n");
}
