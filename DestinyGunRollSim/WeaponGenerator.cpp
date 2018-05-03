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

//Roll for a random perks.
int32 Weapon::DeterminePerk()
{
	int32 perk;

	int32 perkDetermination = (rand() % 1000);
	
	if (perkDetermination < 200)
	{
		perk = 1;
	}
	else if (perkDetermination >= 200 && perkDetermination < 400)
	{
		perk = 2;
	}
	else if (perkDetermination >= 400 && perkDetermination < 600)
	{
		perk = 3;
	}
	else if (perkDetermination >= 600 && perkDetermination < 800)
	{
		perk = 4;
	}
	else
	{
		perk = 5;
	}
	
	return perk;
}

int32 Weapon::GetName()
{
	int32 nameNum = (((rand() % 100) + (rand() % 100)) / 2);

	return nameNum;
}

//Print the weapon to the console, in a way that the user can read the information.
void Weapon::GetWeapon(WeaponTypes type, char perks[])
{
	Pistol pistol;
	Rifle rifle;
	RocketLauncher rocketLauncher;
	Sword sword;

	std::cout << "\nHere's your weapon!\n\n";

	if (type == WeaponTypes::Pistol) //TODO change to calling a function that builds a random pistol.
	{
		pistol.PrintPerks(perks, pistol);
	}
	else if (type == WeaponTypes::Rifle) //TODO change to calling a function that builds a random rifle.
	{
		rifle.PrintPerks(perks, rifle);
	}
	else if (type == WeaponTypes::RocketLauncher) //TODO change to calling a function that builds a random rocket launcher.
	{
		rocketLauncher.PrintPerks(perks, rocketLauncher);
	}
	else //TODO change to calling a function that builds a random sword.
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
		case ('\x1'):
			return "Tripple Tap";
			break;
		case ('\x2'):
			return "Des-Troy";
			break;
		case ('\x3'):
			return "Hallowed Be Thy Name";
			break;
		case ('\x4'):
			return "Hold Your Horses";
			break;
		default:
			return "Fun And Games";
		}
	}
	else
	{
		switch (perks)
		{
		case ('\x1'):
			return "Gold Dust";
			break;
		case ('\x2'):
			return "Mustache";
			break;
		case ('\x3'):
			return "Diamond Fire";
			break;
		case ('\x4'):
			return "Percussion";
			break;
		default:
			return "Projection";
		}
	}
}

void Pistol::PrintPerks(char perks[], Pistol pistol)
{
	int32 nameNum = pistol.GetName();
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

	std::cout	<< " ___|______ \n"
				<< " \\_________|\n"
				<< "    ||        ";
	std::cout << std::endl << std::endl;

	for (int32 perkNum = 0; perkNum < 5; perkNum++)
	{
		FText perk = pistol.GetPerks(perks[perkNum], name);
		std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
	}
}


//RIFLE FUNCTION DEFINITIONS----------

FText Rifle::GetPerks(char perks, FText name)
{
	if (name == "Eye of Azure")
	{
		switch (perks)
		{
		case ('\x1'):
			return "Hallowed Be Thy Name";
			break;
		case ('\x2'):
			return "Infinite Wisdom";
			break;
		case ('\x3'):
			return "Player One";
			break;
		case ('\x4'):
			return "Seven Eight Nine";
			break;
		default:
			return "One For The Money";
		}
	}
	else
	{
		switch (perks)
		{
		case ('\x1'):
			return "Quantumn Leopard";
			break;
		case ('\x2'):
			return "Doctor Zeus";
			break;
		case ('\x3'):
			return "Intelligent Design";
			break;
		case ('\x4'):
			return "Orion's Belt";
			break;
		default:
			return "Hailstorm";
		}
	}
}

void Rifle::PrintPerks(char perks[], Rifle rifle)
{
	int32 nameNum = rifle.GetName();
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

	std::cout	<< "       ___          \n"
				<< " _____|___|________ \n"
				<< " \\_________________|\n"
				<< "      ||              ";
	std::cout << std::endl << std::endl;

	for (int32 perkNum = 0; perkNum < 5; perkNum++)
	{
		FText perk = rifle.GetPerks(perks[perkNum], name);
		std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
	}
}


//ROCKET LAUNCHER FUNCTION DEFINITIONS----------

FText RocketLauncher::GetPerks(char perks, FText name)
{
	if (name == "Djenty Boy")
	{
		switch (perks)
		{
		case ('\x1'):
			return "Fat Man";
			break;
		case ('\x2'):
			return "Fourty Two";
			break;
		case ('\x3'):
			return "Player One";
			break;
		case ('\x4'):
			return "Crowd Control";
			break;
		default:
			return "And Then There Was One";
		}
	}
	else
	{
		switch (perks)
		{
		case ('\x1'):
			return "Chainsmoker";
			break;
		case ('\x2'):
			return "Ballistic Fortitude";
			break;
		case ('\x3'):
			return "Stockhold";
			break;
		case ('\x4'):
			return "Lightning In A Bottle";
			break;
		default:
			return "Treason";
		}
	}
}

void RocketLauncher::PrintPerks(char perks[], RocketLauncher rocketLauncher)
{
	int32 nameNum = rocketLauncher.GetName();
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

	std::cout	<< "        ___      \n"
				<< " ______|   |____ \n"
				<< " \\_____|   |____|\n"
				<< "       |___|       ";
	std::cout << std::endl << std::endl;

	for (int32 perkNum = 0; perkNum < 5; perkNum++)
	{
		FText perk = rocketLauncher.GetPerks(perks[perkNum], name);
		std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
	}
}


//SWORD FUNCTION DEFINITIONS----------

FText Sword::GetPerks(char perks, FText name)
{
	if (name == "Event Horizon")
	{
		switch (perks)
		{
		case ('\x1'):
			return "Double-Edged";
			break;
		case ('\x2'):
			return "Seven Eight Nine";
			break;
		case ('\x3'):
			return "Thousand Cuts";
			break;
		case ('\x4'):
			return "Occam's Razor";
			break;
		default:
			return "Infinite Wisdom";
		}
	}
	else
	{
		switch (perks)
		{
		case ('\x1'):
			return "Shadow Dancer";
			break;
		case ('\x2'):
			return "Puppeteer";
			break;
		case ('\x3'):
			return "Harrowing Slash";
			break;
		case ('\x4'):
			return "Hellbringer";
			break;
		default:
			return "Bloody Knuckles";
		}
	}
}

void Sword::PrintPerks(char perks[], Sword sword)
{
	int32 nameNum = sword.GetName();
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

	std::cout	<< "     /\\    \n"
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
		FText perk = sword.GetPerks(perks[perkNum], name);
		std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
	}
}
