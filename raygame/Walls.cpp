#include "Walls.h"

Walls::Walls(float x, float y, float collisionRadius) : Actor(x, y, collisionRadius)
{
	
}

void Walls::draw()
{
    DrawRectangle(getWorldPosition().x * 32, getWorldPosition().y * 32, 20, 20, BLUE);
    //Draws the actor and a line indicating it facing to the raylib window
    DrawLine(
        (int)(getWorldPosition().x * 32),
        (int)(getWorldPosition().y * 32),
        (int)((getWorldPosition().x + getForward().x) * 32),
        (int)((getWorldPosition().y + getForward().y) * 32),
        WHITE
    );

    //if (m_sprite)
    //    m_sprite->draw(*m_globalTransform);
}

void Walls::onCollision(Actor* other)
{
	if (other->getID() == 10)
	{
		other->setVelocity(MathLibrary::Vector2(0, 0));
	}
}
