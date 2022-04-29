#include "WeaponGenerator.h"

using string = std::string;
using cout = std::cout;
using endl = cout;

//WEAPON FUNCTIONS DEFINITIONS----------

//Randomly choose a weapon type.
WeaponTypes Weapon::DetermineWeaponType()
{
	WeaponTypes weaponType;

	int determination = (rand() % 1000);

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

int Weapon::GetNameNum() { return (((rand() % 100) + (rand() % 100)) / 2); }

//Print the weapon to the console, in a way that the user can read the information.
void Weapon::GetWeapon(WeaponTypes type)
{
	char perks[5];
	Pistol pistol;
	Rifle rifle;
	RocketLauncher rocketLauncher;
	Sword sword;

	cout << "\nHere's your weapon!\n\n";

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

string Pistol::GetPerks(char perks, string name)
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
	int nameNum = pistol.GetNameNum();
	string name;

	if (nameNum <= 50)
	{
		name = "Hairpin";
	}
	else
	{
		name = ".45 Rock";
	}

	cout << "Pistol -- " << name << cout << cout;

	cout << " ___|______ \n"
		<< " \\_________|\n"
		<< "    ||        ";
	cout << cout << cout;

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			string perk = pistol.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = pistol.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = pistol.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
		}
	}
}


//RIFLE FUNCTION DEFINITIONS----------

string Rifle::GetPerks(char perks, string name)
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
	int nameNum = rifle.GetNameNum();
	string name;

	if (nameNum <= 50)
	{
		name = "Eye of Azure";
	}
	else
	{
		name = "The Church";
	}

	cout << "Rifle -- " << name << cout << cout;

	cout << "       ___          \n"
		<< " _____|___|________ \n"
		<< " \\_________________|\n"
		<< "      ||              ";
	cout << cout << cout;

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			string perk = rifle.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = rifle.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = rifle.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
		}
	}
}


//ROCKET LAUNCHER FUNCTION DEFINITIONS----------

string RocketLauncher::GetPerks(char perks, string name)
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
	int nameNum = rocketLauncher.GetNameNum();
	string name;

	if (nameNum <= 50)
	{
		name = "Djenty Boy";
	}
	else
	{
		name = "AmacMillion";
	}

	cout << "Rocket Launcher -- " << name << cout << cout;

	cout << "        ___      \n"
		<< " ______|   |____ \n"
		<< " \\_____|   |____|\n"
		<< "       |___|       ";
	cout << cout << cout;

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			string perk = rocketLauncher.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = rocketLauncher.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = rocketLauncher.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
		}
	}
}


//SWORD FUNCTION DEFINITIONS----------

string Sword::GetPerks(char perks, string name)
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
	int nameNum = sword.GetNameNum();
	string name;

	if (nameNum <= 50)
	{
		name = "Event Horizon";
	}
	else
	{
		name = "The DaRkLiGhT";
	}

	cout << "Sword -- " << name << cout << cout;

	cout << "     /\\    \n"
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
	cout << cout << cout;

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			string perk = sword.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = sword.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
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
			string perk = sword.GetPerks(perks[perkNum], name);
			cout << "Perk" << perkNum + 1 << ": " << perk << cout;
		}
	}
}
