#include "io.h"
#include "DefineFunction.h"

// �Լ� ���� ���� : main�Լ� ���� ����
void DefineFunction();

int main()
{
	// �Լ� ȣ��
	// CppBasic();
	// Variable();
	// ParameterFunction(10,20);
	// ParameterFunction(30, 40);
	// cout << 50 + ReturnFunction() << endl;
	// cout << 30 + ParamReturn(10, 20) << endl;
	// cout << 30 + ParamReturn(30, 40) << endl;
	// cout << 30 + ParamReturn(50, 60) << endl;

	// cout << Absolute(-5);

	//PrintAirplane();
	DynamicAirplane();
}

// �Լ� ���� : main�Լ� �ڿ� ����
void DefineFunction()
{
	cout << "Hello Function" << endl;
}

// ��Ʈ�� ����Ʈ�� ���� ����
/*
	bit : ��ǻ�� ������ ������ �ּҴ���
	byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
	1byte = 8bit

	2���� ���� ������ : 0,1
	���� ���
	1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
	2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

	�� ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte �������� Ȯ��
*/
