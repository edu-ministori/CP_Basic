#pragma once

class Player
{
public:
	int ItemNumber = 0;
	int PlayerEnergy = 0;
	char Weapon = ' ';

	void SetData();
	void PrintItemNumber();
	void PrintEnergy();
	void PrintWeapon();
};