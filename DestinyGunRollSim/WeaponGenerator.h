#include <iostream>
#include <string>

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
	std::string weaponType;
};


//Inheritances...

class Pistol : public Weapon
{
public:
	std::string GetPerks(char perks, std::string name);
	void PrintPerks(char perks[], Pistol pistol);
};

class Rifle : public Weapon
{
public:
	std::string GetPerks(char perks, std::string name);
	void PrintPerks(char perks[], Rifle rifle);
};

class RocketLauncher : public Weapon
{
public:
	std::string GetPerks(char perks, std::string name);
	void PrintPerks(char perks[], RocketLauncher rocketLauncher);
};

class Sword : public Weapon
{
public:
	std::string GetPerks(char perks, std::string name);
	void PrintPerks(char perks[], Sword sword);
};
