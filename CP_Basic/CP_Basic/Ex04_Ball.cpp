#include "io.h"

/*
	�迭�� �� �Է� : Size
	�ݺ� Ƚ�� �Է� : LoopNumber

	�ݺ� Ƚ�� ��ŭ �ݺ� �Է�
	�迭�� ���� ���۰�,���ᰪ �Է� : StartNumber, EndNumber
	�Է°� : InputNumber
*/

void InputBall()
{
	int Size = 0;
	cout << "�ٱ��� ������ �Է� : ";
	cin >> Size;

	int LoopNumber = 0;
	cout << "���ִ� Ƚ���� �Է� : ";
	cin >> LoopNumber;

	int* Basket = new int[Size];

	for (int i = 0; i < Size; i++) {
		Basket[i] = 0;
	}

	int StartNumber = 0, EndNumber = 0, InputNumber = 0;

	for (int i = 0; i < LoopNumber; i++) {
		cin >> StartNumber >> EndNumber >> InputNumber;
		for (int j = StartNumber - 1; j <= EndNumber - 1; j++) {
			Basket[j] = InputNumber;
		}
	}

	for (int i = 0; i < Size; i++) {
		cout << Basket[i] << " : ";
	}
}