#pragma once
#include <string>
#include <vector>

class Player;
class Monster;

class Area
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
	std::string GetName();
	

	// Variables
	
private:
	std::string name;
	std::string description;
	std::vector<Area*> exit_list;
	Monster* monster;

};

