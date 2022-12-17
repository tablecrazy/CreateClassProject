#pragma once
#include "Ninja.h"

namespace Tmpl8
{
	Sprite ninja(new Surface("assets/squishyBall.png"), 1);

	Ninja::Ninja() {}

	Ninja::Ninja(Surface* screen) :
		m_screen{ screen }
	{
	}

	void Ninja::Update(int speed)
	{
		printf("Speed: %d \n", speed);
	}
}