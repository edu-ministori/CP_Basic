#include "io.h"

// �Ű�����
void ParameterFunction(int Param1, int Param2)
{
	cout << Param1 + Param2 << endl;
}

// ���ϰ�
int ReturnFunction()
{
	int NumberA = 10;
	int NumberB = 20;
	int Sum = 0;

	Sum = NumberA + NumberB;

	return Sum;
}

// �Ű����� + ���ϰ�
int ParamReturn(int Param1, int Param2)
{
	int Sum = 0;

	Sum = Param1 + Param2;

	return Sum;
}