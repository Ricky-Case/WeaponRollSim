#include <iostream>
#include <string>
#include "WeaponGenerator.h"

using int32 = int;
using FText = std::string;

//WEAPON FUNCTIONS DEFINITIONS----------

//Randomly choose a weapon type.
WeaponTypes Weapon::DetermineWeaponType()
{
	WeaponTypes weaponType;

	int32 determination = (rand() % 1000);

	if (determination < 400)
	{
		weaponType = WeaponTypes::Pistol;
	}
	else if (determination >= 400 && determination < 800)
	{
		weaponType = WeaponTypes::Rifle;
	}
	else if (determination >= 800 && determination < 900)
	{
		weaponType = WeaponTypes::RocketLauncher;
	}
	else
	{
		weaponType = WeaponTypes::Sword;
	}
	
	return weaponType;
}

int32 Weapon::GetNameNum() { return (((rand() % 100) + (rand() % 100)) / 2); }

//Print the weapon to the console, in a way that the user can read the information.
void Weapon::GetWeapon(WeaponTypes type)
{
	char perks[5];
	Pistol pistol;
	Rifle rifle;
	RocketLauncher rocketLauncher;
	Sword sword;

	std::cout << "\nHere's your weapon!\n\n";

	if (type == WeaponTypes::Pistol)
	{
		pistol.PrintPerks(perks, pistol);
	}
	else if (type == WeaponTypes::Rifle)
	{
		rifle.PrintPerks(perks, rifle);
	}
	else if (type == WeaponTypes::RocketLauncher)
	{
		rocketLauncher.PrintPerks(perks, rocketLauncher);
	}
	else
	{
		sword.PrintPerks(perks, sword);
	}
}


//PISTOL FUNCTION DEFINITIONS----------

FText Pistol::GetPerks(char perks, FText name)
{
	if (name == "Hairpin")
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return "Tripple Tap";
			break;
		case ('\x2'):
			return "Des-Troy";
			break;
		case ('\x4'):
			return "Hallowed Be Thy Name";
			break;
		//Random Perks...
		case ('\x1'):
			return "Hold Your Horses";
			break;
		case ('\x3'):
			return "Percussion";
			break;
		case ('\x5'):
			return "Fun And Games";
			break;
		default:
			return "Projection";
		}
	}
	else
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return "Gold Dust";
			break;
		case ('\x2'):
			return "Mustache";
			break;
		case ('\x4'):
			return "Diamond Fire";
			break;
		//Random Perks...
		case ('\x1'):
			return "Hold Your Horses";
			break;
		case ('\x3'):
			return "Percussion";
			break;
		case ('\x5'):
			return "Fun And Games";
			break;
		default:
			return "Projection";
		}
	}
}

void Pistol::PrintPerks(char perks[], Pistol pistol)
{
	int32 nameNum = pistol.GetNameNum();
	FText name;

	if (nameNum <= 50)
	{
		name = "Hairpin";
	}
	else
	{
		name = ".45 Rock";
	}

	std::cout << "Pistol -- " << name << std::endl << std::endl;

	std::cout << " ___|______ \n"
		<< " \\_________|\n"
		<< "    ||        ";
	std::cout << std::endl << std::endl;

	for (int32 perkNum = 0; perkNum < 5; perkNum++)
	{
		int32 perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			FText perk = pistol.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else if (perkNum == 1)
		{
			if (perkGen < 50)
			{
				perks[perkNum] = 1;
			}
			else
			{
				perks[perkNum] = 3;
			}
			FText perk = pistol.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50)
			{
				perks[perkNum] = 5;
			}
			else
			{
				perks[perkNum] = 6;
			}
			FText perk = pistol.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}


//RIFLE FUNCTION DEFINITIONS----------

FText Rifle::GetPerks(char perks, FText name)
{
	if (name == "Eye of Azure")
	{
		switch (perks)
		{
			//Pre-Chosen Perks...
		case ('\x0'):
			return "Hallowed Be Thy Name";
			break;
		case ('\x2'):
			return "Infinite Wisdom";
			break;
		case ('\x4'):
			return "Player One";
			break;
			//Random Perks...
		case ('\x1'):
			return "Seven Eight Nine";
			break;
		case ('\x3'):
			return "One For The Money";
			break;
		case ('\x5'):
			return "Orion's Belt";
			break;
		default:
			return "Hailstorm";
		}
	}
	else
	{
		switch (perks)
		{
			//Pre-Chosen Perks...
		case ('\x0'):
			return "Quantumn Leopard";
			break;
		case ('\x2'):
			return "Doctor Zeus";
			break;
		case ('\x4'):
			return "Intelligent Design";
			break;
			//Random Perks...
		case ('\x1'):
			return "Seven Eight Nine";
			break;
		case ('\x3'):
			return "One For The Money";
			break;
		case ('\x5'):
			return "Orion's Belt";
			break;
		default:
			return "Hailstorm";
		}
	}
}

void Rifle::PrintPerks(char perks[], Rifle rifle)
{
	int32 nameNum = rifle.GetNameNum();
	FText name;

	if (nameNum <= 50)
	{
		name = "Eye of Azure";
	}
	else
	{
		name = "The Church";
	}

	std::cout << "Rifle -- " << name << std::endl << std::endl;

	std::cout << "       ___          \n"
		<< " _____|___|________ \n"
		<< " \\_________________|\n"
		<< "      ||              ";
	std::cout << std::endl << std::endl;

	for (int32 perkNum = 0; perkNum < 5; perkNum++)
	{
		int32 perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			FText perk = rifle.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else if (perkNum == 1)
		{
			if (perkGen < 50)
			{
				perks[perkNum] = 1;
			}
			else
			{
				perks[perkNum] = 3;
			}
			FText perk = rifle.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50)
			{
				perks[perkNum] = 5;
			}
			else
			{
				perks[perkNum] = 6;
			}
			FText perk = rifle.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}


//ROCKET LAUNCHER FUNCTION DEFINITIONS----------

FText RocketLauncher::GetPerks(char perks, FText name)
{
	if (name == "Djenty Boy")
	{
		switch (perks)
		{
			//Pre-Chosen Perks...
		case ('\x0'):
			return "Fat Man";
			break;
		case ('\x2'):
			return "Fourty Two";
			break;
		case ('\x4'):
			return "Player One";
			break;
			//Random Perks...
		case ('\x1'):
			return "Crowd Control";
			break;
		case ('\x3'):
			return "And Then There Was One";
			break;
		case ('\x5'):
			return "Lightning In A Bottle";
			break;
		default:
			return "Treason";
		}
	}
	else
	{
		switch (perks)
		{
			//Pre-Chosen Perks...
		case ('\x0'):
			return "Chainsmoker";
			break;
		case ('\x2'):
			return "Ballistic Fortitude";
			break;
		case ('\x4'):
			return "Stockhold";
			break;
			//Random Perks...
		case ('\x1'):
			return "Crowd Control";
			break;
		case ('\x3'):
			return "And Then There Was One";
			break;
		case ('\x5'):
			return "Lightning In A Bottle";
			break;
		default:
			return "Treason";
		}
	}
}

void RocketLauncher::PrintPerks(char perks[], RocketLauncher rocketLauncher)
{
	int32 nameNum = rocketLauncher.GetNameNum();
	FText name;

	if (nameNum <= 50)
	{
		name = "Djenty Boy";
	}
	else
	{
		name = "AmacMillion";
	}

	std::cout << "Rocket Launcher -- " << name << std::endl << std::endl;

	std::cout << "        ___      \n"
		<< " ______|   |____ \n"
		<< " \\_____|   |____|\n"
		<< "       |___|       ";
	std::cout << std::endl << std::endl;

	for (int32 perkNum = 0; perkNum < 5; perkNum++)
	{
		int32 perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			FText perk = rocketLauncher.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else if (perkNum == 1)
		{
			if (perkGen <= 50)
			{
				perks[perkNum] = 1;
			}
			else
			{
				perks[perkNum] = 3;
			}
			FText perk = rocketLauncher.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50)
			{
				perks[perkNum] = 5;
			}
			else
			{
				perks[perkNum] = 6;
			}
			FText perk = rocketLauncher.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}


//SWORD FUNCTION DEFINITIONS----------

FText Sword::GetPerks(char perks, FText name)
{
	if (name == "Event Horizon")
	{
		switch (perks)
		{
			//Pre-Chosen Perks...
		case ('\x0'):
			return "Double-Edged";
			break;
		case ('\x2'):
			return "Seven Eight Nine";
			break;
		case ('\x4'):
			return "Thousand Cuts";
			break;
			//Random Perks...
		case ('\x1'):
			return "Occam's Razor";
			break;
		case ('\x3'):
			return "Infinite Wisdom";
			break;
		case ('\x5'):
			return "Hellbringer";
			break;
		default:
			return "Bloody Knuckles";
		}
	}
	else
	{
		switch (perks)
		{
			//Pre-Chosen Perks...
		case ('\x0'):
			return "Shadow Dancer";
			break;
		case ('\x2'):
			return "Puppeteer";
			break;
		case ('\x4'):
			return "Harrowing Slash";
			break;
			//Random Perks...
		case ('\x1'):
			return "Occam's Razor";
			break;
		case ('\x3'):
			return "Infinite Wisdom";
			break;
		case ('\x5'):
			return "Hellbringer";
			break;
		default:
			return "Bloody Knuckles";
		}
	}
}

void Sword::PrintPerks(char perks[], Sword sword)
{
	int32 nameNum = sword.GetNameNum();
	FText name;

	if (nameNum <= 50)
	{
		name = "Event Horizon";
	}
	else
	{
		name = "The DaRkLiGhT";
	}

	std::cout << "Sword -- " << name << std::endl << std::endl;

	std::cout << "     /\\    \n"
		<< "    |  |   \n"
		<< "    |  |   \n"
		<< "    |  |   \n"
		<< "    |  |   \n"
		<< "    |  |   \n"
		<< " ___|  |___\n"
		<< " \\__|__|__/\n"
		<< "     ||    \n"
		<< "     ||    \n" 
		<< "     ()      ";
	std::cout << std::endl << std::endl;

	for (int32 perkNum = 0; perkNum < 5; perkNum++)
	{
		int32 perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			FText perk = sword.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else if (perkNum == 1)
		{
			if (perkGen <= 50)
			{
				perks[perkNum] = 1;
			}
			else
			{
				perks[perkNum] = 3;
			}
			FText perk = sword.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50)
			{
				perks[perkNum] = 5;
			}
			else
			{
				perks[perkNum] = 6;
			}
			FText perk = sword.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}
