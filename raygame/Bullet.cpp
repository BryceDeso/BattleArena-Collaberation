
#include "Gun.h"
#include "raylib.h"
#include "Sprite.h"
#include "Bullet.h"

Bullet::Bullet(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed, MathLibrary::Vector2 velocity) : Actor(x, y, collisionRadius, spriteFilePath, maxSpeed)
{
	setVelocity(velocity);
}

void CheckCollisionCircles()
{

}

void Bullet::run()
{

}

void Bullet::onCollision(Actor* other)
{
	
}

void Bullet::start()
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

void Bullet::end()
{

}
