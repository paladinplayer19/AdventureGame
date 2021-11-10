#pragma once
#include <string>

class Player
{
public:

	Player();
	~Player();

	// Functions
	void Look();

	// Variables
	std::string name;
	std::string description;
	int health;
	int attack;
	std::string currentArea;

};

