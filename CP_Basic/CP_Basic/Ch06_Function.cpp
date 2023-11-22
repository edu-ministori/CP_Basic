#include "io.h"

// 매개변수
void ParameterFunction(int Param1, int Param2)
{
	cout << Param1 + Param2 << endl;
}

// 리턴값
int ReturnFunction()
{
	int NumberA = 10;
	int NumberB = 20;
	int Sum = 0;

	Sum = NumberA + NumberB;

	return Sum;
}

// 매개변수 + 리턴값
int ParamReturn(int Param1, int Param2)
{
	int Sum = 0;

	Sum = Param1 + Param2;

	return Sum;
}