#include "WeaponGenerator.h"


//**********WEAPON FUNCTIONS DEFINITIONS**********//

//Randomly choose a weapon type.
WeaponTypes Weapon::DetermineWeaponType() const
{
	int determination = (rand() % 1000);

	if (determination < 400) { return WeaponTypes::Pistol; }
	else if (determination >= 400 && determination < 800) { return WeaponTypes::Rifle; }
	else if (determination >= 800 && determination < 900) { return WeaponTypes::RocketLauncher; }
	else { return WeaponTypes::Sword; }
}

int Weapon::GetNameNum() const { return (((rand() % 100) + (rand() % 100)) / 2); }

//Print the weapon to the console, in a way that the user can read the information.
void Weapon::MakeWeapon() const
{
	std::cout << clearTerminal
		<< promptHeresYourWeapon;

	char perks[5];
	WeaponTypes type = DetermineWeaponType();

	if (type == WeaponTypes::Pistol)
	{
		Pistol pistol;
		pistol.PrintPerks(perks, pistol);
	}
	else if (type == WeaponTypes::Rifle)
	{
		Rifle rifle;
		rifle.PrintPerks(perks, rifle);
	}
	else if (type == WeaponTypes::RocketLauncher)
	{
		RocketLauncher rocketLauncher;
		rocketLauncher.PrintPerks(perks, rocketLauncher);
	}
	else
	{
		Sword sword;
		sword.PrintPerks(perks, sword);
	}
}




//**********PISTOL FUNCTION DEFINITIONS**********//

std::string Pistol::GetPerks(char& perks, std::string& name) const
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
}

void Pistol::PrintPerks(char perks[], Pistol& pistol)
{
	int nameNum = pistol.GetNameNum();

	std::string name;
	if (nameNum <= 50) { name = lPistolName; }
	else { name = hPistolName; }

	std::cout << "Pistol -- " << name << std::endl
		<< std::endl
		<< pistolDesign << std::endl;

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
			if (perkGen < 50) { perks[perkNum] = 1; }
			else { perks[perkNum] = 3; }

			std::string perk = pistol.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50) { perks[perkNum] = 5; }
			else { perks[perkNum] = 6; }

			std::string perk = pistol.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}




//**********RIFLE FUNCTION DEFINITIONS**********//

std::string Rifle::GetPerks(char& perks, std::string& name) const
{
	if (name == lRifleName)
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_hallowedBeThyName;
			break;
		case ('\x2'):
			return P_sevenEightNine;
			break;
		case ('\x4'):
			return P_playerOne;
			break;

		//Random Perks...
		case ('\x1'):
			return P_infiniteWisdom;
			break;
		case ('\x3'):
			return P_oneForTheMoney;
			break;
		case ('\x5'):
			return P_orionsBelt;
			break;
		default:
			return P_hailstorm;
		}
	}
	else
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_quantumLeopard;
			break;
		case ('\x2'):
			return P_doctorZeus;
			break;
		case ('\x4'):
			return P_intelligentDesign;
			break;

		//Random Perks...
		case ('\x1'):
			return P_infiniteWisdom;
			break;
		case ('\x3'):
			return P_oneForTheMoney;
			break;
		case ('\x5'):
			return P_orionsBelt;
			break;
		default:
			return P_hailstorm;
		}
	}
}

void Rifle::PrintPerks(char perks[], Rifle& rifle)
{
	int nameNum = rifle.GetNameNum();
	std::string name;

	if (nameNum <= 50) { name = lRifleName; }
	else { name = hRifleName; }

	std::cout << "Rifle -- " << name << std::endl
		<< std::endl
		<< rifleDesign << std::endl;

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
			if (perkGen < 50) { perks[perkNum] = 1; }
			else { perks[perkNum] = 3; }

			std::string perk = rifle.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50) { perks[perkNum] = 5; }
			else { perks[perkNum] = 6; }

			std::string perk = rifle.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}




//**********ROCKET LAUNCHER FUNCTION DEFINITIONS**********//

std::string RocketLauncher::GetPerks(char& perks, std::string& name) const
{
	if (name == lRocketName)
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_fatMan;
			break;
		case ('\x2'):
			return P_fourtyTwo;
			break;
		case ('\x4'):
			return P_playerOne;
			break;

		//Random Perks...
		case ('\x1'):
			return P_crowdControl;
			break;
		case ('\x3'):
			return P_andThenThereWasOne;
			break;
		case ('\x5'):
			return P_lightningInABottle;
			break;
		default:
			return P_treason;
		}
	}
	else
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_chainsmoker;
			break;
		case ('\x2'):
			return P_ballisticFortitude;
			break;
		case ('\x4'):
			return P_stockhold;
			break;

		//Random Perks...
		case ('\x1'):
			return P_crowdControl;
			break;
		case ('\x3'):
			return P_andThenThereWasOne;
			break;
		case ('\x5'):
			return P_lightningInABottle;
			break;
		default:
			return P_treason;
		}
	}
}

void RocketLauncher::PrintPerks(char perks[], RocketLauncher& rocketLauncher)
{
	int nameNum = rocketLauncher.GetNameNum();
	std::string name;

	if (nameNum <= 50) { name = lRocketName; }
	else { name = hRocketName; }

	std::cout << "Rocket Launcher -- " << name << std::endl
		<< std::endl
		<< rocketLauncherDesign << std::endl;

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
			if (perkGen <= 50) { perks[perkNum] = 1; }
			else { perks[perkNum] = 3; }

			std::string perk = rocketLauncher.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50) { perks[perkNum] = 5; }
			else { perks[perkNum] = 6; }

			std::string perk = rocketLauncher.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}




//**********SWORD FUNCTION DEFINITIONS**********//

std::string Sword::GetPerks(char& perks, std::string& name) const
{
	if (name == lSwordName)
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_doubleEdged;
			break;
		case ('\x2'):
			return P_sevenEightNine;
			break;
		case ('\x4'):
			return P_thousandCuts;
			break;

		//Random Perks...
		case ('\x1'):
			return P_occamsRazer;
			break;
		case ('\x3'):
			return P_infiniteWisdom;
			break;
		case ('\x5'):
			return P_hellbringer;
			break;
		default:
			return P_bloodyKnuckles;
		}
	}
	else
	{
		switch (perks)
		{
		//Pre-Chosen Perks...
		case ('\x0'):
			return P_shadowDancer;
			break;
		case ('\x2'):
			return P_puppeteer;
			break;
		case ('\x4'):
			return P_harrowingStrike;
			break;

		//Random Perks...
		case ('\x1'):
			return P_occamsRazer;
			break;
		case ('\x3'):
			return P_infiniteWisdom;
			break;
		case ('\x5'):
			return P_hellbringer;
			break;
		default:
			return P_bloodyKnuckles;
		}
	}
}

void Sword::PrintPerks(char perks[], Sword& sword)
{
	int nameNum = sword.GetNameNum();
	std::string name;

	if (nameNum <= 50) { name = lSwordName; }
	else { name = hSwordName; }

	std::cout << "Sword -- " << name << std::endl
		<< std::endl
		<< swordDesign << std::endl;

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
			if (perkGen <= 50) { perks[perkNum] = 1; }
			else { perks[perkNum] = 3; }

			std::string perk = sword.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
		else
		{
			if (perkGen <= 50) { perks[perkNum] = 5; }
			else { perks[perkNum] = 6; }

			std::string perk = sword.GetPerks(perks[perkNum], name);
			std::cout << "Perk" << perkNum + 1 << ": " << perk << std::endl;
		}
	}
}
