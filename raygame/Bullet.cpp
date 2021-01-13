
#include "Gun.h"
#include "raylib.h"
#include "Sprite.h"
#include "Bullet.h"

Bullet::Bullet()
{
	float m_damage = 20;
}

Bullet::Bullet(Sprite* sprite)
{
	m_sprite = sprite;
}

void Bullet::run()
{

}

void Bullet::start()
{

}

void Bullet::update(float delaTime)
{

}

void Bullet::draw()
{
	BeginDrawing();
	EndDrawing();
}

void Bullet::end()
{

}
