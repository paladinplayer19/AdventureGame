#pragma once

#include <string>
#include "Creature.h"

class Monster : public Creature
{
public:
	Monster(std::string newName, std::string newDescription, int newHealth,	int newDamage);
	~Monster();	

private:
	Monster* monster;

};

