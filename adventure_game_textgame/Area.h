#pragma once
#include <string>

class Area
{
public:

	Area();
	Area(std::string newName, std::string newDescription, std::string newExit);
	~Area();

	// Functions
	void Look();

	// Variables
	std::string name;
	std::string description;
	std::string exit;

};

