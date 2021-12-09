#pragma once
#include <vector>
#include "Thing.h"

class Monster;

class Area: public Thing
{
public:

	Area();
	Area(std::string newName, std::string newDescription);
	~Area();

	// Functions
	void Look(Player* player);
	void Go(Player* player, std::string input);
	std::string GetMonster();
	void AddExit(Area* newArea);
	void AddMonster(Monster* newMonster);

	// Variables
	
private:
	std::vector<Area*> exit_list;
	Monster* monster;

};

