#include "Bullet.h"
#include "raylib.h"
#include "Sprite.h"
#include "Game.h"

Bullet::Bullet(float x, float y, float collisionRadius, int ID, char icon, float maxSpeed, MathLibrary::Vector2 velocity) : Actor(x, y, collisionRadius, icon, maxSpeed)
{
	setVelocity(velocity);
    m_bulletID = ID;
    m_ID = 40;
}

//Checks what a bullet has collided with using the actor's ID.
void Bullet::onCollision(Actor* other)
 {
    //Checks if bullet has collided with a wall by checking actor's ID.
    if (other->getID() == 30)
    {
        setVelocity(MathLibrary::Vector2(0, 0));
    }

    //Checks if a bullet with the ID of '1' has collided with a player by checking actor's ID.
    if (getBulletID() == 1)
    {
        //Is set to empty as to not despawn the player shooting the bullet.
        if (other->getID() == 10)
        {

        }
        //Despawns Player 2 if bullet collides with it.
        if (other->getID() == 20)
        {
            Game::destroy(other);
        }
    }

    //Checks if a bullet with the ID of '2' has collided with a player by checking the actor's ID.
    if (getBulletID() == 2)
    {
        //Is set to empty as to not despawn the player shooting the bullet.
        if (other->getID() == 20)
        {

        }
        //Despawns Player 1 if bullet collides with it.
        if (other->getID() == 10)
        {
            Game::destroy(other);
        }
    }
}

void Bullet::setBulletID(int value)
{
    m_bulletID = value;
}

//Update the velocity and check for collision
void Bullet::update(float deltaTime)
{
    Actor::update(deltaTime);

    if (getWorldPosition().x < 0 || getWorldPosition().x > 50
        || getWorldPosition().y < 0 || getWorldPosition().y > 30)

        Game::destroy(this);

}

void Bullet::draw()
{
    DrawCircle(getWorldPosition().x * 32, getWorldPosition().y * 32, 20, RED);
}