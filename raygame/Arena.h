#pragma once

#include "Actor.h"

class Arena : public Actor
{
public:
	Arena();

private:
	void onCollision(Actor* other);
	void update(float delaTime);
	void draw();

private:
	
};