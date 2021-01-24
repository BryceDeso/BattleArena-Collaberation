
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
    DrawCircle(getWorldPosition().x * 32, getWorldPosition().y * 32, 20, RED);
    //Draws the actor and a line indicating it facing to the raylib window
    DrawLine(
        (int)(getWorldPosition().x * 32),
        (int)(getWorldPosition().y * 32),
        (int)((getWorldPosition().x + getForward().x) * 32),
        (int)((getWorldPosition().y + getForward().y) * 32),
        BLUE
    );
}