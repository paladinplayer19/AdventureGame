#pragma once
#include <string>

class Area;
class Monster;

class Player
{
public:

	Player();
	~Player();
	
	// Functions

	void Look();
	void DealDamage();
	Area* GetCurrentArea();
	void SetCurrentArea(Area* newCurrentArea);
	int GetHealth();
	int GetDamage();

	

private:	
	// Variables
	std::string name;
	std::string description;
	int health;
	int damage;
	Area* currentArea;

};

