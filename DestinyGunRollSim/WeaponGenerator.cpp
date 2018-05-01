#include <iostream>
#include <string>
#include "WeaponGenerator.h"

using int32 = int;
using FText = std::string;

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
	int32 perk = 0;

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

//Print the weapon to the console, in a way that the user can read the information.
void Weapon::PrintWeapon(WeaponTypes type, char perks[])
{
	Rifle rifle;
	Pistol pistol;
	RocketLauncher rocketLauncher;
	Sword sword;


	//weaponType = GetWeaponType(type);
	FText perk;

	std::cout << "\nHere's your weapon!\n\n";

	if (type == WeaponTypes::Pistol)
	{
		std::cout << "Pistol --" << std::endl << std::endl;
		for (int32 perkNum = 0; perkNum < 5; perkNum++)
		{
			perk = pistol.GetPerks(perks[perkNum]);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
	else if (type == WeaponTypes::Rifle)
	{
		std::cout << "Rifle --" << std::endl << std::endl;
		for (int32 perkNum = 0; perkNum < 5; perkNum++)
		{
			perk = rifle.GetPerks(perks[perkNum]);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
	else if (type == WeaponTypes::RocketLauncher)
	{
		std::cout << "Rocket Launcher --" << std::endl << std::endl;
		for (int32 perkNum = 0; perkNum < 5; perkNum++)
		{
			perk = rocketLauncher.GetPerks(perks[perkNum]);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
	else
	{
		std::cout << "Sword --" << std::endl << std::endl;
		for (int32 perkNum = 0; perkNum < 5; perkNum++)
		{
			perk = sword.GetPerks(perks[perkNum]);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}

FText Rifle::GetPerks(char perks)
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

FText Pistol::GetPerks(char perks)
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

FText RocketLauncher::GetPerks(char perks)
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

FText Sword::GetPerks(char perks)
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