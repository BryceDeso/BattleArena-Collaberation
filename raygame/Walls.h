#pragma once
#include "Actor.h"
#include "Player.h"
#include "raylib.h"

class Walls : public Actor
{
public:
	Walls() {};
	Walls(float x, float y, float collisionRadius);

public:
	virtual void draw() override;

	void onCollision(Actor* other);

private:
	
};
