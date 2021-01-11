#pragma once

#include "Actor.h"

class Player : public Actor
{
public:
	Player();
	Player(float health);

	bool getIsAlive();
	float getHealth() { return m_health; }

private:
	float m_health;
};