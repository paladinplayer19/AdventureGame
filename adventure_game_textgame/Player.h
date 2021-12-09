#pragma once
#include <string>

class Area;
class Monster;

class Player
{
public:

	Player(std::string newName, int newHealth, int newDamage);
	~Player();
	
	// Functions

	void Look();
	void DealDamage();
	Area* GetCurrentArea();
	void SetCurrentArea(Area* newCurrentArea);


	

private:	
	// Variables
	Area* currentArea;

};

