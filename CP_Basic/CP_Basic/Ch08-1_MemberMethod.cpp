#include "Ex08-1_MemberClass.h"
#include "io.h"

void Member::SetId(std::string ID)
{
	this->ID = ID;
}
std::string Member::GetId()
{
	return this->ID;
}

void Member::SetName(std::string Name)
{
	this->Name = Name;
}
std::string Member::GetName()
{
	return this->Name;
}

void Member::SetPoint(int Point)
{
	this->Point = Point;
}
int Member::GetPoint()
{
	return this->Point;
}

void Member::PrintMember()
{
	cout << this->ID << " : "
		<< this->Name << " : "
		<< this->Point << endl;
}