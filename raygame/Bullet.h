#pragma once

#include "Actor.h"

class Bullet : public Actor
{
public:
	Bullet(float x, float y, float collisionRadius, int ID, char icon, float maxSpeed, MathLibrary::Vector2 velocity);

public:
	void onCollision(Actor* other);
	void update(float delaTime);
	void draw();
	void setBulletID(int value);
	int getBulletID() { return m_bulletID; }

private:
	static float m_damage;
	//Used to ID which bullets are for which player.
	int m_bulletID;
	//Used to check collision between actors.
	int m_ID;

};