
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

void Gun::update(float deltaTime)
{
	Actor::update(deltaTime);
}

void Gun::draw()
{
	BeginDrawing();
	EndDrawing();
}