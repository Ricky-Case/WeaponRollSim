#ifndef WEAPONGENERATOR_H
#define WEAPONGENERATOR_H

#include <iostream>
#include "Strings.h"

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
	int GetNameNum() const;
	void MakeWeapon() const;
	WeaponTypes DetermineWeaponType() const;

private:
	std::string weaponType;
};


//Inheritances...
class Pistol : public Weapon
{
public:
	std::string GetPerks(char& perks, std::string& name) const;
	void PrintPerks(char perks[], Pistol& pistol);
};

class Rifle : public Weapon
{
public:
	std::string GetPerks(char& perks, std::string& name) const;
	void PrintPerks(char perks[], Rifle& rifle);
};

class RocketLauncher : public Weapon
{
public:
	std::string GetPerks(char& perks, std::string& name) const;
	void PrintPerks(char perks[], RocketLauncher& rocketLauncher);
};

class Sword : public Weapon
{
public:
	std::string GetPerks(char& perks, std::string& name) const;
	void PrintPerks(char perks[], Sword& sword);
};

#endif
