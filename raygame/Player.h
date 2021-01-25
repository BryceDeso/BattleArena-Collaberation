#pragma once

#include "Actor.h"

class Player : public Actor
{
public:
	Player();
	Player(float health, float x, float y, float collisionRadius, char icon, float maxSpeed);

	void SetPlayerInput(KeyboardKey up, KeyboardKey down, KeyboardKey left, KeyboardKey right, KeyboardKey brake, KeyboardKey shoot);

	bool getIsAlive();
	//Gets player's current health.
	float getHealth() { return m_health; }

	void CreateProjectile();

	void update(float deltatime) override;
	void end() override;

private:
	KeyboardKey m_moveUp;
	KeyboardKey m_moveDown;
	KeyboardKey m_moveLeft;
	KeyboardKey m_moveRight;
	KeyboardKey m_brake;
	KeyboardKey m_shoot;
	float m_health;
	int m_ID;
};