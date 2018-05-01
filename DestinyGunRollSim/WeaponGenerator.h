#pragma once
#include <iostream>
#include <string>

using int32 = int;
using FText = std::string;


enum class WeaponTypes
{
	Rifle,
	Pistol,
	RocketLauncher,
	Sword
};

//Randomly generate a weapon.
class Weapon
{
public:
	//Function Declarations...
	int32 DeterminePerk();
	void PrintWeapon(WeaponTypes type, char perks[]);
	WeaponTypes DetermineWeaponType();

private:
	//Variable Declarations...
	int32 weaponPerks[5];
	FText weaponType;
};

//Instantiations...

class Rifle : public Weapon { public: FText GetPerks(char perks); };
class Pistol : public Weapon { public: FText GetPerks(char perks); };
class RocketLauncher : public Weapon { public: FText GetPerks(char perks); };
class Sword : public Weapon { public: FText GetPerks(char perks); };