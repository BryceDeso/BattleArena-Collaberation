
#include "raylib.h"
#include "Bullet.h"
#include "Sprite.h"

Bullet::Bullet(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed, MathLibrary::Vector2 velocity) : Actor(x, y, collisionRadius, spriteFilePath, maxSpeed)
{
	setVelocity(velocity);
}

//Removes subtracts the health from the other player when a bullet collides
void Bullet::onCollision(Actor* other)
{
	
}

//Update the velocity and check for collision
void Bullet::update(float delaTime)
{

}

void Bullet::draw()
{
	BeginDrawing();
	EndDrawing();
}