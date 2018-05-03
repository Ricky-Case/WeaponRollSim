/*
Destiny Gun Random Roll Simulator.
This app is for me to personally see just how difficult it would be (in theory) to implement random weapon rolls into a game like Destiny.
I'm doing this because the lack of weapon rolls is one of my main points of frustration with Destiny 2.
*/

#include <iostream>
#include <string>
#include "WeaponGenerator.h"

using int32 = int;
using FText = std::string;

Weapon weapon;

char PlayAgain();
void PlayGame();


//Entry point for the application...
int main()
{
	FText response;
	int32 iterator = 1;

	//Prompt the user to activate the roll.
	std::cout << "Do you want to roll a weapon? (Y/N) -- ";

	do
	{
		getline(std::cin, response);

		if (toupper(response[0]) == 'Y')
		{
			std::cout << "\nExcellent, Guardian! I'll se you on the battlefield!\n\n";
			PlayGame();
			iterator = 0;
		}
		else if (toupper(response[0]) == 'N')
		{
			std::cout << "\nThat's too bad... We'll see you later, Guardian.";
			iterator = 0;
		}
		else
		{
			std::cout << "\nPlease enter a valid response.\n";
		}
	} while (iterator != 0);

	FText end;
	std::cout << "\n\nPress 'ENTER' to exit.";
	getline(std::cin, end);
	return 0;
}

void PlayGame()
{
	char response;

	do
	{
		WeaponTypes type = weapon.DetermineWeaponType();

		weapon.GetWeapon(type);

		response = PlayAgain();
	} while (response == 'Y');
}

char PlayAgain()
{
	FText response;

	std::cout << "\n\nWould you like to play again? ";
	
	do
	{
		getline(std::cin, response);

		if (toupper(response[0]) == 'Y')
		{
			std::cout << "\nI hope you enjoy this as much as I do, Guardian!\n\n";
		}
		else if (toupper(response[0]) == 'N')
		{
			std::cout << "\nTake care, Guardian. You're keeping the city safe.\n\n";
		}
		else
		{
			std::cout << "\nThat was not a valid response.\n";
		}
	} while (toupper(response[0]) != 'Y' && toupper(response[0]) != 'N');

	return (toupper(response[0]));
}
