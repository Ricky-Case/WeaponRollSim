#include "WeaponGenerator.h"


//**********WEAPON FUNCTIONS DEFINITIONS**********//

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
void Weapon::MakeWeapon(WeaponTypes type)
{
	char perks[5];
	Pistol pistol;
	Rifle rifle;
	RocketLauncher rocketLauncher;
	Sword sword;

	std::cout << clearTerminal
		<< promptHeresYourWeapon;

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




//**********PISTOL FUNCTION DEFINITIONS**********//

std::string Pistol::GetPerks(char perks, std::string name)
{
	if (name == lPistolName)
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_tripleTap;
			break;
		case ('\x2'):
			return P_desTroy;
			break;
		case ('\x4'):
			return P_hallowedBeThyName;
			break;
		//Random Perks...
		case ('\x1'):
			return P_holdYourHorses;
			break;
		case ('\x3'):
			return P_percussion;
			break;
		case ('\x5'):
			return P_funAndGames;
			break;
		default:
			return P_projection;
		}
	}
	else
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_goldDust;
			break;
		case ('\x2'):
			return P_mustache;
			break;
		case ('\x4'):
			return P_diamondFire;
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
	std::string name;

	if (nameNum <= 50)
	{
		name = lPistolName;
	}
	else
	{
		name = hPistolName;
	}

	std::cout << "Pistol -- " << name << std::endl << std::endl;

	std::cout << " ___|______ \n"
		<< " \\_________|\n"
		<< "    ||        ";
	std::cout << std::endl << std::endl;

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			std::string perk = pistol.GetPerks(perks[perkNum], name);
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
			std::string perk = pistol.GetPerks(perks[perkNum], name);
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
			std::string perk = pistol.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}




//**********RIFLE FUNCTION DEFINITIONS**********//

std::string Rifle::GetPerks(char perks, std::string name)
{
	if (name == lRifleName)
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
	std::string name;

	if (nameNum <= 50)
	{
		name = lRifleName;
	}
	else
	{
		name = hRifleName;
	}

	std::cout << "Rifle -- " << name << std::endl << std::endl;

	std::cout << "       ___          \n"
		<< " _____|___|________ \n"
		<< " \\_________________|\n"
		<< "      ||              ";
	std::cout << std::endl << std::endl;

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			std::string perk = rifle.GetPerks(perks[perkNum], name);
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
			std::string perk = rifle.GetPerks(perks[perkNum], name);
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
			std::string perk = rifle.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}




//**********ROCKET LAUNCHER FUNCTION DEFINITIONS**********//

std::string RocketLauncher::GetPerks(char perks, std::string name)
{
	if (name == lRocketName)
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
	std::string name;

	if (nameNum <= 50)
	{
		name = lRocketName;
	}
	else
	{
		name = hRocketName;
	}

	std::cout << "Rocket Launcher -- " << name << std::endl << std::endl;

	std::cout << "        ___      \n"
		<< " ______|   |____ \n"
		<< " \\_____|   |____|\n"
		<< "       |___|       ";
	std::cout << std::endl << std::endl;

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			std::string perk = rocketLauncher.GetPerks(perks[perkNum], name);
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
			std::string perk = rocketLauncher.GetPerks(perks[perkNum], name);
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
			std::string perk = rocketLauncher.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}




//**********SWORD FUNCTION DEFINITIONS**********//

std::string Sword::GetPerks(char perks, std::string name)
{
	if (name == lSwordName)
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
	std::string name;

	if (nameNum <= 50)
	{
		name = lSwordName;
	}
	else
	{
		name = hSwordName;
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

	for (int perkNum = 0; perkNum < 5; perkNum++)
	{
		int perkGen = (rand() % 100);

		if (perkNum == 0 || perkNum == 2 || perkNum == 4)
		{
			perks[perkNum] = perkNum;
			std::string perk = sword.GetPerks(perks[perkNum], name);
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
			std::string perk = sword.GetPerks(perks[perkNum], name);
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
			std::string perk = sword.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}
