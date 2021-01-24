
#include "Arena.h"
#include "raylib.h"
#include "Player.h"
#include "Game.h"

Arena::Arena(float x, float y, float collisionRadius, char icon, float maxSpeed) : Actor( x,  y, collisionRadius,  icon,  maxSpeed)
{

}

void Arena::randomizeArena()
{
	int i;

	i = GetRandomValue(1, 3);

	if (i == 1)
	{
		arena1();
	}

	else if (i == 2)
	{
		arena2();
	}

	else if (i == 3)
	{
		arena3();
	}
}

void Arena::generateArena()
{
	Walls* wall;
	m_wallCount = 33;
	int i = ' ';
	int j = ' ';
	int x = 0;
	int y = 0;
	int incrementx = 1;
	int incrementy = 1;

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x, 0, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementx; j++)
		{
			x++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(32.5f, y, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementy; j++)
		{
			y++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x, 23.7f, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementx; j++)
		{
			x--;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(0, y, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementy; j++)
		{
			y--;
		}
	}
}

void Arena::update(float delaTime)
{
	//we should check collision in this
}

void Arena::arena1()
{

}

void Arena::arena2()
{

}

void Arena::arena3()
{

}

//Draw the wallS
void Arena::draw()
{

}