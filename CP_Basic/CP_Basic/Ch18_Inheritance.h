#pragma once
#include "io.h"


class Car
{
public:
	int Year = 10;
protected:
	int Fuel;
};

class UsedCar : public Car
{
private:
	int NewPrice = 30000000;
public:
	void PrintPrice();
};