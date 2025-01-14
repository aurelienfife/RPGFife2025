#pragma once

#include <iostream>
#include <string>

using namespace std;

class Weapon
{
	// Spefics for all the weapons
	string name;
	int damage;

public:
	Weapon(const string& _name, int _damage);
};

