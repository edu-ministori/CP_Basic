#pragma once
#include <string>

class Overloading
{
private:
	int Number;
	std::string Name;

public:
	int Value = 0;

	Overloading();
	~Overloading();

	void Print();
	void Print(int Number);
	void Print(std::string Name);
	void Print(int Number, std::string Name);

	Overloading operator+(Overloading& arg);
};