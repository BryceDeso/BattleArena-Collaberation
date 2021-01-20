#pragma once

#include "Actor.h"
#include "Bullet.h"

class Gun : public Actor
{
public:
	Gun();
	Gun(Sprite* sprite);

private:
	void spawnBullet();
	void update(float delaTime);
	void draw();
};
