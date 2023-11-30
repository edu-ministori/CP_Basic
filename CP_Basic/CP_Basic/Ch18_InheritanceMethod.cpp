#include "Ch18_Inheritance.h"
#include "io.h"

void UsedCar::PrintPrice()
{
	Year = 10;
	cout << Fuel << endl;
	cout << NewPrice - (1000000 * Year);
}