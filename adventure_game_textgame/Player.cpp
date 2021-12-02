#include "Player.h"
#include "Area.h"
#include "Monster.h"

Player::Player()
	: name("")
	, description("")
	, health(100)
	, damage(10)
	, currentArea(nullptr)
{
}

Player::~Player()
{
}

void Player::Look()
{
}

void Player::DealDamage()
{
	//health -= currentArea->GetMonster();
}

Area* Player::GetCurrentArea()
{
	return currentArea;
}

void Player::SetCurrentArea(Area* newCurrentArea)
{
	currentArea = newCurrentArea;
}

int Player::GetHealth()
{
	return health;
}

int Player::GetDamage()
{
	return damage;
}




