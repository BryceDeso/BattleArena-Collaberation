#pragma once

#include "Actor.h"
#include "Walls.h"

class Arena : public Actor
{
public:
	Arena();
	Arena(float x, float y, float collisionRadius, char icon, float maxSpeed);

public:
	void update(float delaTime);
	void draw();

	void generateArena();

private:
	void randomizeArena();
	void grid();

private:
	void arena1();
	void arena2();
	void arena3();

private:
	Walls* wallarray[4] = {};
};