#pragma once
#include <string>

class Player;

class Thing
{	

public:
	void look(Player* player);
	std::string GetName();
private:
	std::string name;
	std::string description;

};

