#include "io.h"

int GlobalNumber = 10;

void Sum()
{
	int FunctionLocalNumber = 20;

	for (int BlockLocalNumber = 0; BlockLocalNumber < 3; BlockLocalNumber++) {
		cout << "Global : " << GlobalNumber + BlockLocalNumber << endl;
		cout << "FunctionLocal : " << FunctionLocalNumber + BlockLocalNumber << endl;
	}

	// cout << "Global : " << GlobalNumber + i << endl; : i 인식 불가능
	cout << "Global : " << GlobalNumber << endl;
	cout << "FunctionLocal : " << FunctionLocalNumber << endl;
}