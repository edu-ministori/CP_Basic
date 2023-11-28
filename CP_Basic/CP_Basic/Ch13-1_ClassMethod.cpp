#include "Ch13-1_ClassHeader.h"
#include "io.h"

void Player::SetData()
{
	ItemNumber = 10;
	PlayerEnergy = 100;
	Weapon = 'G';
}

void Player::PrintItemNumber()
{
	cout << ItemNumber << endl;
}

void Player::PrintEnergy()
{
	cout << PlayerEnergy << endl;
}

void Player::PrintWeapon()
{
	cout << Weapon << endl;
}