
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

//What happens when the player collides with an arena wall
void Arena::onCollision(Actor* other)
{
	
}

void Arena::update(float delaTime)
{
	//we should check collision in this
}

void Arena::arena1()
{

	RAYLIB_H::BeginDrawing();

	RAYLIB_H::DrawRectangle(100, 100, 100, 100, CLITERAL(Color){ 76, 63, 47, 255 });//Brown
	RAYLIB_H::DrawRectangle(200, 200, 100, 100, CLITERAL(Color){200, 122, 255, 255});//Purple
	RAYLIB_H::DrawRectangle(100, 300, 100, 100, CLITERAL(Color){ 0, 121, 241, 255 });//Blue
	RAYLIB_H::DrawRectangle(100, 400, 100, 100, CLITERAL(Color){ 230, 41, 55, 255 });//Red
	RAYLIB_H::DrawRectangle(200, 500, 100, 100, CLITERAL(Color){ 0, 158, 47, 255 });//lime
	RAYLIB_H::DrawRectangle(100, 600, 100, 100, CLITERAL(Color){ 255, 161, 0, 255 });//Orange


	RAYLIB_H::EndDrawing();
}

void Arena::arena2()
{

	RAYLIB_H::BeginDrawing();

	RAYLIB_H::DrawRectangle(100, 100, 100, 100, CLITERAL(Color){ 102, 191, 255, 255 });//Sky Blue
	RAYLIB_H::DrawRectangle(200, 200, 100, 100, CLITERAL(Color){ 102, 191, 255, 255 });//Sky Blue
	RAYLIB_H::DrawRectangle(100, 300, 100, 100, CLITERAL(Color){ 102, 191, 255, 255 });//Sky Blue
	RAYLIB_H::DrawRectangle(100, 400, 100, 100, CLITERAL(Color){ 102, 191, 255, 255 });//Sky Blue
	RAYLIB_H::DrawRectangle(200, 500, 100, 100, CLITERAL(Color){ 102, 191, 255, 255 });//Sky Blue
	RAYLIB_H::DrawRectangle(100, 600, 100, 100, CLITERAL(Color){ 102, 191, 255, 255 });//Sky Blue


	RAYLIB_H::EndDrawing();
}

void Arena::arena3()
{

	RAYLIB_H::BeginDrawing();

	RAYLIB_H::DrawRectangle(100, 100, 100, 100, CLITERAL(Color){ 200, 122, 255, 255 });//Purple
	RAYLIB_H::DrawRectangle(200, 200, 100, 100, CLITERAL(Color){ 200, 122, 255, 255 });//Purple
	RAYLIB_H::DrawRectangle(100, 300, 100, 100, CLITERAL(Color){ 200, 122, 255, 255 });//Purple
	RAYLIB_H::DrawRectangle(100, 400, 100, 100, CLITERAL(Color){ 200, 122, 255, 255 });//Purple
	RAYLIB_H::DrawRectangle(200, 500, 100, 100, CLITERAL(Color){ 200, 122, 255, 255 });//Purple
	RAYLIB_H::DrawRectangle(100, 600, 100, 100, CLITERAL(Color){ 200, 122, 255, 255 });//Purple


	RAYLIB_H::EndDrawing();
}

//Draw the wallS
void Arena::draw()
{
	randomizeArena();
}