#include "Enemy.h"
#include <stdio.h>

bool Enemy::isAllAlive = false;


Enemy::Enemy()
{
	isAlive = true;
	isAllAlive = true;
}

Enemy::~Enemy()
{
}

bool Enemy::IsAlive()
{
	return isAlive;
}

void Enemy::SetDeath()
{
	isAlive = 0;
	isAllAlive = 0;
}

void Enemy::Update()
{
	if (isAllAlive == 0)
	{
		isAlive = 0;
	}
}

void Enemy::Draw()
{
	if (IsAlive())
	{
		printf("“G‚Ì•\Ž¦\n");
	}
}
