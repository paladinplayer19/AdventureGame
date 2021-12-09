#pragma once

#include "Thing.h";


class Creature : public Thing
{ 

public:

	void Attack(std::string newInput, Player* player);
	int GetHealth();
	int GetDamage();

private:
	int health;
	int damage;
};

