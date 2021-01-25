#pragma once

#include "Actor.h"
#include "Walls.h"

class Arena : public Actor
{
public:
	Arena();
	Arena(float x, float y, float collisionRadius, char icon, float maxSpeed);

public:
	void generateArena();

private:
	void randomizeArena();

private:
	void arena1();
	void arena2();
	void arena3();

private:
	Walls* wallarray[99] = {};
	int m_wallCount;
};