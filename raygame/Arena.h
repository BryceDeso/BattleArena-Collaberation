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
	void onCollision(Actor* other);

private:
	void arena1();
	void arena2();
	void arena3();

private:
	Walls* wallarray[4] = {m_wall1, m_wall2, m_wall3, m_wall4};

	Walls* m_wall1;
	Walls* m_wall2;
	Walls* m_wall3;
	Walls* m_wall4;
};