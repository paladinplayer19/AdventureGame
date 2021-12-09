#include "Player.h"
#include "Area.h"
#include "Monster.h"

Player::Player(std::string newName, int newHealth, int newDamage)
	: currentArea(nullptr)
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





