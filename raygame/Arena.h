#pragma once

#include "Actor.h"

class Arena : public Actor
{
public:
	Arena();
	Arena(float x, float y, float collisionRadius, char icon, float maxSpeed);

private:
	void randomizeArena();
	void grid();
	void onCollision(Actor* other);
	void update(float delaTime);
	void draw();

private:
	void arena1();
	void arena2();
	void arena3();
};