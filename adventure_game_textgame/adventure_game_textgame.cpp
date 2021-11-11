#include <iostream>

#include "Player.h"
#include "Area.h"

int main()
{
	Player player;
	Area Entrance("Entrance", "the beginning of the castle ", "Study");
	Area Study("Study", "a room to examine and learn knowledge", "Bedroom");
	Area Bedroom("Bedroom", "a room to take a dump in", "Kitchen");
	Area Kitchen("Kitchen", "a room to make and prepare meals", "Diningroom");
	Area Diningroom("Diningroom", " a room to sit down and consume meals", "");
	std::string input;
	bool isOver = false;
	
	


	std::cout << "To quit the program when you are finished type 'Quit'" << std::endl;
	std::cout << "Welcome to the haunted castle. You are currently in the " << player.currentArea << std::endl;
	
	while (!isOver) {

		std::cout << "What do you want to do next?\n";
		std::cin >> input;

		if (input == "look" || input == "Look")
		{
			std::cout << std::endl;
			std::cout << "Look at what?" << std::endl;
			std::cin >> input;
			if (input == "area" || input == "Area")
			{ 
				if (player.currentArea == "Entrance")
				{
					Entrance.Look();
				}
				if (player.currentArea == "Study")
				{
					Study.Look();
				}
				if (player.currentArea == "Bedroom")
				{
					Bedroom.Look();
				}
				if (player.currentArea == "Kitchen")
				{
					Kitchen.Look();
				}
				if (player.currentArea == "Diningroom")
				{
					Diningroom.Look();
				}
				
			}
		}

		if (input == "go" || input == "Go")
		{
			
			std::cout << "Go where?" << std::endl;
			std::cin >> input;
			if (input == Entrance.name)
			{
				std::cout << "You have decided to go to the " << Entrance.name << std::endl;
				player.currentArea = "Entrance";

			} 
			if (input == Study.name && player.currentArea == Entrance.name)
			{
				std::cout << "You have decided to go to the " << Study.name << std::endl;
				player.currentArea = "Study";

			}
			else if (input == Study.name && !(player.currentArea == Entrance.name))
			{
				std::cout << "You are unable to find door to the " << input << std::endl;
				
			}

			if (input == Bedroom.name && player.currentArea == Study.name)
			{
				std::cout << "You have decided to go to the " << Bedroom.name << std::endl;
				player.currentArea = "Bedroom";

			}
			else if (input == Bedroom.name && !(player.currentArea == Study.name))
			{
				std::cout << "You are unable to find door to the " << input << std::endl;
				
			}
			if (input == Kitchen.name && player.currentArea == Bedroom.name)
			{
				std::cout << "You have decided to go to the " << Kitchen.name << std::endl;
				player.currentArea = "Kitchen";

			}
			else if (input == Kitchen.name && !(player.currentArea == Bedroom.name))
			{
				std::cout << "You are unable to find door to the " << input << std::endl;
				
			}
			if (input == Diningroom.name && player.currentArea == Kitchen.name)
			{
				std::cout << "You have decided to go to the " << Diningroom.name << std::endl;
				player.currentArea = "Diningroom";

			}
			else if (input == Diningroom.name && !(player.currentArea == Kitchen.name))
			{
				std::cout << "You are unable to find door to the " << input << std::endl;
				
			}
		}

		

		if (input == "Quit" || input == "quit")
		{
			isOver = true;
		}
	}
	
}