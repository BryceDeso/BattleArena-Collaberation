
#include "Gun.h"
#include "raylib.h"
#include "Sprite.h"

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