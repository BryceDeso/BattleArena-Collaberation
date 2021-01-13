#pragma once

#include "Actor.h"

class Gun : public Actor
{
public:
	Gun();
	Gun(Sprite* sprite);
	void run();

private:
	void start();
	void update(float delaTime);
	void draw();
	void end();

private:
	static float m_damage;
};
