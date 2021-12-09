#include <iostream>

#include "Player.h"
#include "Area.h"
#include "Monster.h"


int main()
{
	// Setup player instance
	Player player("Sir Arthur", 100, 10);
	
	// Setup area instances
	Area Entrance("Entrance", "the beginning of the castle ");
	Area Study("Study", "a room to examine and learn knowledge");
	Area Bedroom("Bedroom", "a room to sleep in");
	Area Kitchen("Kitchen", "a room to make and prepare meals");
	Area Diningroom("Diningroom", " a room to sit down and consume meals");
	Area Bathroom("Bathroom", " a room to sit down and take a dump");

	// Setup monster instanced
	Monster Spider("Spider", "This being is an arachnid like no other", 10, 5);
	Monster Skeleton("Skeleton", "This being is skinny and eats way too much calcium based foods", 20, 5);
	Monster Ogre("Spider", "This being is an arachnid like no other", 30, 5);
	
	// Add Exits and Monsters for each room
	//Entrance
	Entrance.AddExit(&Study);
	Entrance.AddMonster(&Spider);
	// Study
	Study.AddExit(&Bedroom);
	Study.AddExit(&Entrance);
	Study.AddMonster(&Spider);

	// Bedroom
	Bedroom.AddExit(&Study);
	Bedroom.AddExit(&Kitchen);
	Bedroom.AddMonster(&Skeleton);

	// Kitchen
	Kitchen.AddExit(&Bedroom);
	Kitchen.AddExit(&Diningroom);
	Kitchen.AddMonster(&Skeleton);

	// Diningroom
	Diningroom.AddExit(&Kitchen);
	Diningroom.AddExit(&Bathroom);
	Diningroom.AddMonster(&Ogre);

	// Bathroom
	Bathroom.AddExit(&Diningroom);
	Bathroom.AddMonster(&Ogre);
	

	

	std::string input;
	bool isOver = false;
	
	
	player.SetCurrentArea(&Entrance);
	
	
	std::cout << "To quit the program when you are finished type 'Quit'" << std::endl;
	std::cout << "Welcome to the haunted castle. You are currently in the " << player.GetCurrentArea()->GetName() << std::endl;
	
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
				if (player.GetCurrentArea() != nullptr)
				{


					player.GetCurrentArea()->Look(&player);
				}							
			}
		}

		if (input == "go" || input == "Go")
		{
			
			std::cout << "Go where?" << std::endl;
			std::cin >> input;


			if (player.GetCurrentArea() != nullptr)
			{

			player.GetCurrentArea()->Go(&player, input);

			}
		}

		if (input == "Attack" || input == "attack")
		{

			std::cout << "Attack what?" << std::endl;
			std::cin >> input;


			if (player.GetCurrentArea() != nullptr)
			{

				player.DealDamage();


				
			}
		}

		

		if (input == "Quit" || input == "quit")
		{
			isOver = true;
		}
	}
	
}