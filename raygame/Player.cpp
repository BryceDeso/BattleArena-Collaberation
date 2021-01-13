#include "Player.h"
#include "Game.h"
#include "Scene.h"
#include "raylib.h"
#include <iostream>

Player::Player()
{
	m_health = 100;
}

Player::Player(float health, float x, float y, float collisionRadius, char icon, float maxSpeed) :Actor(x, y, collisionRadius, icon, maxSpeed)
{
	m_health = health;
}

//Gets whether or not the player's health is zero.
bool Player::getIsAlive()
{
	return m_health > 0;
}

void Player::update(float deltatime)
{
	int xDirection = -Game::getKeyDown(KEY_A) + Game::getKeyDown(KEY_D);
	int yDirection = -Game::getKeyDown(KEY_W) + Game::getKeyDown(KEY_S);

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
