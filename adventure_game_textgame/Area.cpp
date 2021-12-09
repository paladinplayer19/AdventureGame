#include <iostream>
#include "Area.h"
#include "Player.h"
#include "Monster.h"

Area::Area() 
	: exit_list()
	, monster()
{

}

Area::Area(std::string newName, std::string newDescription)
	: exit_list()
	, monster()
{
}

Area::~Area()
{
}

void Area::Look(Player* player)
{
	
	
		std::cout << "You look around the " << player->GetCurrentArea()->GetName() << " which to sum up is " << /* << */ ", the room(s) next to you is the ";
		
		for (int i = 0; i < exit_list.size(); ++i)
		{
			std::cout << player->GetCurrentArea()->exit_list[i]->GetName() << ",";
			
		}

		std::cout << std::endl;
}

void Area::Go(Player* player, std::string input)
{
	

	for (int i = 0; i < exit_list.size(); ++i)
	{
		
		
			if (input == player->GetCurrentArea()->exit_list[i]->GetName())
			{
				std::cout << "You went to the " << exit_list[i]->GetName() << std::endl;
				player->SetCurrentArea(exit_list[i]);

				return;
			}
	}
	
	std::cout << "You are unable to find a door leading to the " << input << std::endl;

}

std::string Area::GetMonster()
{
	return std::string(monster->GetName());
}


void Area::AddExit(Area* newArea)
{
	exit_list.push_back(newArea);
}

void Area::AddMonster(Monster* newMonster)
{
	monster = newMonster;
}


