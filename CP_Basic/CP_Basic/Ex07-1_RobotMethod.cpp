#include "Ex07-1_RobotClass.h"
#include "io.h"

void CRobot::Set(std::string Name, int Height, int Weight, int HP)
{
	this->Name = Name;
	this->Height = Height;
	this->Weight = Weight;
	this->HP = HP;
}

void CRobot::Print()
{
	cout << this->Name << " : "
		<< this->Height << " : "
		<< this->Weight << " : "
		<< this->HP << endl;
}