
#include "Gun.h"
#include "raylib.h"
#include "Sprite.h"
#include "Game.h"
#include "Bullet.h"

Gun::Gun()
{
	
}

//This is an overloaded constructor that takes in a sprite
Gun::Gun(Sprite* sprite) : Actor(sprite)
{
	m_sprite = sprite;
}

void Gun::start()
{

}

void Gun::update(float deltaTime)
{
	Actor::update(deltaTime);

	if (Game::getKeyPressed(KEY_SPACE))
		Game::getCurrentScene()->addActor(new Bullet(
			getWorldPosition().x, getWorldPosition().y, 2, m_sprite, 5, getForward() * 5));
}

void Gun::draw()
{
	BeginDrawing();
	EndDrawing();
}

void Gun::end()
{

}

void Gun::run()
{
	start();

	end();
}