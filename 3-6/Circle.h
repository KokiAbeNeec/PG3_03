#pragma once
#include "Ishape.h"


class Circle :public Ishape
{
public:
	void size()override;
	void draw()override;
};