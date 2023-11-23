#include "io.h"

int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
int ArrSize = sizeof(arr) / sizeof(arr[0]);

void ArraySum()
{
	int Sum = 0;

	for (int i = 0; i < ArrSize; i++) {
		Sum += arr[i];
	}

	cout << Sum << endl;
}

void Sort()
{
	int Temp = 0;

	// 버블 정렬 : 반복 - 전체 사이클, 인접한 원소 비교
	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				Temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = Temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			cout << arr[i] << endl;
		}
		else
		{
			cout << arr[i] << " : ";
		}
	}

	cout << endl;
	cout << "최소값 : " << arr[0] << endl;
	cout << "최대값 : " << arr[ArrSize-1] << endl;
}

void Reverse()
{
	int TempArr[10];

	for (int i = 0; i < 10; i++) {
		TempArr[i] = arr[9 - i];
	}

	for (int i = 0; i < 10; i++) {
		arr[i] = TempArr[i];
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " : ";
	}
}