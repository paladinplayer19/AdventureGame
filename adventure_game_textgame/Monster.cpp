#include "Monster.h"
#include "Player.h"

Monster::Monster()
	: name("")
	, description("")
	, health(100)
	, damage(5)
{
}

Monster::~Monster()
{
}

void Monster::Attack(Player* player)
{
	health -= player->GetDamage();
}

std::string Monster::GetName()
{
	return std::string(name);
}

int Monster::GetHealth()
{
	return health;
}

int Monster::GetDamage()
{
	return damage;
}
