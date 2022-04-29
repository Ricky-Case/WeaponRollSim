/*
Destiny Gun Random Roll Simulator.
This app is for me to personally see how difficult it would be (in theory) to implement random weapon rolls into a game like Destiny.
I'm doing this because the lack of weapon rolls is one of my main points of frustration with Destiny 2.
*/

#include <ctime>
#include "WeaponGenerator.h"

Weapon weapon;

char PlayAgain();
void PlayGame();

//Entry point for the application...
int main()
{
	std::string response;
	int iterator = 1;

	srand(time(NULL));

	//Prompt the user to activate the roll.
	std::cout << clearTerminal
		<< promptRollWeapon;

	do
	{
		std::cout << promptInput;
		getline(std::cin, response);

		if (toupper(response[0]) == yes)
		{
			std::cout << clearTerminal
				<< promptDoRestart;
			PlayGame();
			iterator = 0;
		}
		else if (toupper(response[0]) == no)
		{
			std::cout << clearTerminal
				<< promptDontRestart;
			iterator = 0;
		}
		else
		{
			std::cout << clearTerminal
				<< alertInvalidInput;
		}
	} while (iterator != 0);

	std::string blankInput;
	std::cout << promptExit;
	getline(std::cin, blankInput);
	return 0;
}

void PlayGame()
{
	char response;

	do
	{
		weapon.MakeWeapon();
		response = PlayAgain();
	} while (response == yes);
}

char PlayAgain()
{
	std::string response;

	std::cout << clearTerminal
		<< promptGoAgain
		<< promptInput;

	do
	{
		getline(std::cin, response);

		if (toupper(response[0]) == yes)
		{
			std::cout << clearTerminal
				<< promptEnjoy;
		}
		else if (toupper(response[0]) == no)
		{
			std::cout << clearTerminal
				<< promptTakeCare;
		}
		else
		{
			std::cout << clearTerminal
				<< alertInvalidInput;
		}
	} while (toupper(response[0]) != yes && toupper(response[0]) != no);

	return (toupper(response[0]));
}
