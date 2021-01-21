#pragma once

#include "Actor.h"

class Player2 : public Actor
{
public:
	Player2();
	Player2(float health, float x, float y, float collisionRadius, char icon, float maxSpeed);

	bool getIsAlive();
	//Gets player's current health.
	float getHealth() { return m_health; }
	void update(float deltatime) override;

private:
	float m_health;
	int m_ID;
};