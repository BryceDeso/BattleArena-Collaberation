
#include "raylib.h"
#include "Bullet.h"
#include "Sprite.h"
#include "Game.h"

Bullet::Bullet(float x, float y, float collisionRadius, char icon, float maxSpeed, MathLibrary::Vector2 velocity) : Actor(x, y, collisionRadius, icon, maxSpeed)
{
	setVelocity(velocity);
}

//Removes subtracts the health from the other player when a bullet collides
void Bullet::onCollision(Actor* other)
{
	
}

//Update the velocity and check for collision
void Bullet::update(float deltaTime)
{
	Actor::update(deltaTime);
}

void Bullet::draw()
{
	BeginDrawing();
	EndDrawing();
}