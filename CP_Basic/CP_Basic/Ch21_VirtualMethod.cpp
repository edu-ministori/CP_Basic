#include "Ch21_Virtual.h"
#include "io.h"

void Parent::PrintClass()
{
	cout << "Parent Class" << endl;
}

void Child::PrintClass()
{
	cout << "Child Class" << endl;
}

void VParent::PrintClass()
{
	cout << "VParent Class" << endl;
}

void VChild::PrintClass()
{
	cout << "VChild Class" << endl;
}