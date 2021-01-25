#include "Walls.h"
#include "Game.h"

Walls::Walls(float x, float y, float collisionRadius, float height, float width)
    : Actor(x, y, collisionRadius, height, width)
{
    m_ID = 30;
}

void Walls::draw()
{
    DrawRectangle(getWorldPosition().x * 31, getWorldPosition().y * 30, 50, 50, BROWN);
}

void Walls::onCollision(Actor* other)
{
	if (other->getID() == 10 || other->getID() == 20)
	{
        other->setVelocity(MathLibrary::Vector2(0, 0));
	}

    if (other->getID() == 40)
    {
        Game::destroy(other);
    }
}
