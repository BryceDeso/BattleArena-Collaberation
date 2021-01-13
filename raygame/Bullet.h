#pragma once

#include "Actor.h"

class Bullet : public Actor
{
public:
	Bullet();
	Bullet(Sprite* sprite);
	void run();

private:
	void start();
	void update(float delaTime);
	void draw();
	void end();

private:
	static float m_damage;
};