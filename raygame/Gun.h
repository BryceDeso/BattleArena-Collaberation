#pragma once

#include "Actor.h"

class Sprite;

class Gun : public Actor
{
public:
	Gun();
	Gun(Sprite* sprite);
	void run();

private:
	float damageEnemy();
	void start();
	void update(float delaTime);
	void draw();
	void end();

private:
	static float m_damage;
};
