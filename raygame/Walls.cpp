#include "Walls.h"

Walls::Walls(float x, float y, float collisionRadius, float height, float width)
    : Actor(x, y, collisionRadius, height, width)
{

}

void Walls::draw()
{
    DrawRectangle(getWorldPosition().x * 26, getWorldPosition().y * 26, 120, 120, BROWN); 
    //Draws the actor and a line indicating it facing to the raylib window
    DrawLine(
        (int)(getWorldPosition().x * 32),
        (int)(getWorldPosition().y * 32),
        (int)((getWorldPosition().x + getForward().x) * 32),
        (int)((getWorldPosition().y + getForward().y) * 32),
        WHITE
    );
}

void Walls::onCollision(Actor* other)
{
	if (other->getID() == 10 || other->getID() == 20)
	{
        other->setVelocity(MathLibrary::Vector2(0, 0));
	}
}
