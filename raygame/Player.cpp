#include "Player.h"
#include "Game.h"
#include "Scene.h"
#include "raylib.h"
#include "Bullet.h"
#include <iostream>

Player::Player()
{
	m_health = 100;
}

Player::Player(float health, float x, float y, float collisionRadius, char icon, float maxSpeed) :Actor(x, y, collisionRadius, icon, maxSpeed)
{
	m_health = health;
}

void Player::SetPlayerInput(KeyboardKey up, KeyboardKey down, KeyboardKey left, KeyboardKey right, KeyboardKey brake, KeyboardKey shoot)
{
	m_moveUp = up;
	m_moveDown = down;
	m_moveLeft = left;
	m_moveRight = right;
	m_brake = brake;
	m_shoot = shoot;
}

//Gets whether or not the player's health is zero.
bool Player::getIsAlive()
{
	return m_health > 0;
}

void Player::update(float deltatime)
{

	int xDirection = -Game::getKeyDown(m_moveLeft) + Game::getKeyDown(m_moveRight);
	int yDirection = -Game::getKeyDown(m_moveUp) + Game::getKeyDown(m_moveDown);

	//When V is pressed the player will stop completely.
	if (Game::getKeyDown(m_brake))
	{
		setVelocity(MathLibrary::Vector2(0, 0));
	}

	setAcceleration(MathLibrary::Vector2(xDirection, yDirection));

	if (getVelocity().getMagnitude() > 0)
	{
		lookAt(getWorldPosition() + getVelocity().getNormalized());
	}

	if (Game::getKeyPressed(m_shoot))
	{
		if (m_shoot == KEY_E)
		{
			Game::getCurrentScene()->addActor(new Bullet(
				getWorldPosition().x, getWorldPosition().y, 0.5f, 1, ' ', 10, getForward() * 10));
		}

		if (m_shoot == KEY_SPACE)
		{
			Game::getCurrentScene()->addActor(new Bullet(
				getWorldPosition().x, getWorldPosition().y , 0.5f, 2, ' ', 10, getForward() * 10));
		}
	}
	Actor::update(deltatime);
}
