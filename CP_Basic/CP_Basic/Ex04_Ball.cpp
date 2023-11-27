#include "io.h"

/*
	배열의 수 입력 : Size
	반복 횟수 입력 : LoopNumber

	반복 횟수 만큼 반복 입력
	배열의 범위 시작값,종료값 입력 : StartNumber, EndNumber
	입력값 : InputNumber
*/

void InputBall()
{
	int Size = 0;
	cout << "바구니 개수를 입력 : ";
	cin >> Size;

	int LoopNumber = 0;
	cout << "공넣는 횟수를 입력 : ";
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