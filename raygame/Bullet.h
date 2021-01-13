#pragma once

#include "Actor.h"

class Bullet : public Actor
{
public:
	Bullet(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed, MathLibrary::Vector2 velocity);
	void run();

private:
	void onCollision(Actor* other);
	void start();
	void update(float delaTime);
	void draw();
	void end();

private:
	static float m_damage;
};