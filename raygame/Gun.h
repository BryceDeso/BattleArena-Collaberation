#pragma once

#include "Actor.h"

class Gun : public Actor
{
public:
	Gun();
	Gun(Sprite* sprite);
	void run();

private:
	void spawnBullet();
	void start();
	void update(float delaTime);
	void draw();
	void end();
};
