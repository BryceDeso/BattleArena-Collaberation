
#include "Arena.h"
#include "raylib.h"
#include "Player.h"
#include "Game.h"

Arena::Arena(float x, float y, float collisionRadius, char icon, float maxSpeed) : Actor( x,  y, collisionRadius,  icon,  maxSpeed)
{

}

//Calls a random arena.
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

//Generates four walls using four for loops and picks a random arena for the players ot fight in.
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
	
	//Draws top wall.
	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x, 0, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementx; j++)
		{
			x++;
		}
	}

	//Draws right wall.
	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(32.5f, y, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementy; j++)
		{
			y++;
		}
	}

	//Draws bottom wall.
	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x, 23.7f, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementx; j++)
		{
			x--;
		}
	}

	//Draws left wall.
	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(0, y, 1.5f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementy; j++)
		{
			y--;
		}
	}
	
	randomizeArena();
}

void Arena::arena1()
{
	Walls* wall;
	m_wallCount = 6;
	int i = ' ';
	int j = ' ';
	int x1 = 13;
	int x2 = 13;
	int y1 = 9;
	int y2 = 9;
	int incrementBy = 1;

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(8, y1, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			y1++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(24, y2, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			y2++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x1, 5, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			x1++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x2, 18, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			x2++;
		}
	}
}

void Arena::arena2()
{
	Walls* wall;
	m_wallCount = 6;
	int i = ' ';
	int j = ' ';

	int x1 = 7;
	int y1 = 11;

	int x2 = 24;
	int y2 = 11;

	int x3 = 13;
	int y3 = 15;

	int x4 = 17;
	int y4 = 4;

	int incrementBy = 1;

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x1, y1, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			y1++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x2, y2, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			y2++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x3, y3, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			y3++;
			x3++;
		}
	}

	for (int i = 0; i < m_wallCount; i++)
	{
		wall = wallarray[i] = new Walls(x4, y4, 0.7f, 20, 20);
		Game::getCurrentScene()->addActor(wall);

		for (int j = 0; j < incrementBy; j++)
		{
			y4++;
			x4--;
		}
	}
}

void Arena::arena3()
{

}