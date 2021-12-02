#pragma once

#include <string>

class Player;

class Monster
{
public:
	Monster();
	~Monster();

	void Attack(Player* player);
	std::string GetName();
	int GetHealth();
	int GetDamage();

private:
	std::string name;
	std::string description;
	int health;
	int damage;
	Monster* monster;

};

