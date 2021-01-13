
#include "Gun.h"
#include "raylib.h"
#include "Sprite.h"
#include "Bullet.h"

Bullet::Bullet(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed, MathLibrary::Vector2 velocity) : Actor(x, y, collisionRadius, spriteFilePath, maxSpeed)
{
	setVelocity(velocity);
}

void Bullet::onCollision(Actor* other)
{
	
}

void Bullet::update(float delaTime)
{

}

void Bullet::draw()
{
	BeginDrawing();
	EndDrawing();
}