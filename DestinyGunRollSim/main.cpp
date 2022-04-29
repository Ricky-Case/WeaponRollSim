/*
Destiny Gun Random Roll Simulator.
This app is for me to personally see how difficult it would be (in theory) to implement random weapon rolls into a game like Destiny.
I'm doing this because the lack of weapon rolls is one of my main points of frustration with Destiny 2.
*/

#include <ctime>
#include "WeaponGenerator.h"

using string = std::string;
using cout = std::cout;
using cin = std::cin;
using endl = std::endl;

Weapon weapon;

char PlayAgain();
void PlayGame();

//Entry point for the application...
int main()
{
	string response;
	int iterator = 1;

	srand(time(NULL));

	//Prompt the user to activate the roll.
	cout << "Do you want to roll a weapon? (Y/N) -- ";

	do
	{
		getline(cin, response);

		if (toupper(response[0]) == 'Y')
		{
			cout << "\nExcellent, Guardian! I'll se you on the battlefield!\n\n";
			PlayGame();
			iterator = 0;
		}
		else if (toupper(response[0]) == 'N')
		{
			cout << "\nThat's too bad... We'll see you later, Guardian.";
			iterator = 0;
		}
		else
		{
			cout << "\nPlease enter a valid response.\n";
		}
	} while (iterator != 0);

	string end;
	cout << "\n\nPress 'ENTER' to exit.";
	getline(cin, end);
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
	string response;

	cout << "\n\nWould you like to play again? ";

	do
	{
		getline(cin, response);

		if (toupper(response[0]) == 'Y')
		{
			cout << "\nI hope you enjoy this as much as I do, Guardian!\n\n";
		}
		else if (toupper(response[0]) == 'N')
		{
			cout << "\nTake care, Guardian. You're keeping the city safe.\n\n";
		}
		else
		{
			cout << "\nPlease enter a valid response.\n";
		}
	} while (toupper(response[0]) != 'Y' && toupper(response[0]) != 'N');

	return (toupper(response[0]));
}
