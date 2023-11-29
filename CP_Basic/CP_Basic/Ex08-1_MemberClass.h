#pragma once
#include <string>

class Member
{
private:
	std::string ID;
	std::string Name;
	int Point;
public:
	void SetId(std::string ID);
	std::string GetId();

	void SetName(std::string Name);
	std::string GetName();
	
	void SetPoint(int Point);
	int GetPoint();

	void PrintMember();
};