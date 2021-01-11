
#include "Gun.h"
#include "raylib.h"

float Gun::m_damage = 40;

Gun::Gun()
{
	m_damage = 40;
}

//This is an overloaded constructor that takes in a sprite
Gun::Gun(Sprite* sprite) : Actor(sprite)
{
	m_sprite = sprite;
	m_damage = 40;
}

void Gun::start()
{

}

void Gun::update(float deltaTime)
{

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