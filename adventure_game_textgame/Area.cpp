#include "Area.h"
#include <iostream>

Area::Area() 
	: name("")
	, description("")
	, exit("")
{

}

Area::Area(std::string newName, std::string newDescription, std::string newExit)
	: name(newName)
	, description(newDescription)
	, exit(newExit)
{

}

Area::~Area()
{
}

void Area::Look()
{
	
	
	std::cout << "You look around the " << name << " which to sum up is " << description << ", the room next to you is the " << exit << "\n";
}
