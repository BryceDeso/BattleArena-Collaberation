
#include "Arena.h"
#include "raylib.h"
#include "Player.h"

Arena::Arena(float x, float y, float collisionRadius, char icon, float maxSpeed) : Actor( x,  y, collisionRadius,  icon,  maxSpeed)
{
	randomizeArena();
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
	int i = ' ';
	for (int i = 0; i < sizeof(wallarray[4]); i++)
	{
		
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
	m_wall1;
}