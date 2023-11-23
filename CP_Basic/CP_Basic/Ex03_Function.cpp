#include "io.h"

int Absolute(int Number)
{
	int Result = 0;

	if (Number < 0) {
		Result = Number * -1;
	}
	else {
		Result = Number;
	}

	return Result;
}