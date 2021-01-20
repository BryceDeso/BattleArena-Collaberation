#include "Player2.h"
#include "Game.h"
#include "Scene.h"
#include "raylib.h"
#include <iostream>

Player2::Player2()
{
	m_health = 100;
}

Player2::Player2(float health, float x, float y, float collisionRadius, char icon, float maxSpeed) :Actor(x, y, collisionRadius, icon, maxSpeed)
{
	m_health = health;
}

//Gets whether or not the player's health is zero.
bool Player2::getIsAlive()
{
	return m_health > 0;
}

void Player2::update(float deltatime)
{
	int xDirection = -Game::getKeyDown(KEY_LEFT) + Game::getKeyDown(KEY_RIGHT);
	int yDirection = -Game::getKeyDown(KEY_UP) + Game::getKeyDown(KEY_DOWN);


	//When V is pressed the player will stop completely.
	if (Game::getKeyDown(KEY_M))
	{
		setVelocity(MathLibrary::Vector2(0, 0));
	}

	setAcceleration(MathLibrary::Vector2(xDirection, yDirection));

	if (getVelocity().getMagnitude() > 0)
	{
		lookAt(getWorldPosition() + getVelocity().getNormalized());
	}

	/*if (Game::getKeyPressed(KEY_SPACE))
		Game::getCurrentScene()->addActor(new Bullet(
			getWorldPosition().x, getWorldPosition().y, 2, m_sprite, 5, getForward() * 5));*/

	Actor::update(deltatime);
}
