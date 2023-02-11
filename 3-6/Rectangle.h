#pragma once
#include "Ishape.h"


class Rectangle :public Ishape
{
public:
	void size()override;
	void draw()override;
};