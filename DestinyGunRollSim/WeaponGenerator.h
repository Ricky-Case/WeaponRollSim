#pragma once
#include <iostream>
#include <string>

using string = std::string;
using cout = std::cout;
using endl = std::endl;

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
	int GetNameNum();
	void GetWeapon(WeaponTypes type);
	WeaponTypes DetermineWeaponType();

private:
	//Variable Declarations...
	string weaponType;
};


//Inheritances...

class Pistol : public Weapon
{
public:
	string GetPerks(char perks, string name);
	void PrintPerks(char perks[], Pistol pistol);
};

class Rifle : public Weapon
{
public:
	string GetPerks(char perks, string name);
	void PrintPerks(char perks[], Rifle rifle);
};

class RocketLauncher : public Weapon
{
public:
	string GetPerks(char perks, string name);
	void PrintPerks(char perks[], RocketLauncher rocketLauncher);
};

class Sword : public Weapon
{
public:
	string GetPerks(char perks, string name);
	void PrintPerks(char perks[], Sword sword);
};
