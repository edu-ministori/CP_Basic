#include "io.h"

/*
	정적 할당 : Static Allocation(Alloc)
	동적 할당 : Dynamic Allocation

	*변수에 값을 대입 : 할당(Assign)
*/

void DynamicAlloc()
{
	int* pNumber = new int; // int type 변수 동적 생성

	// pNumber : 주소
	*pNumber = 50;

	cout << pNumber << endl; // 주소
	cout << *pNumber << endl; // 값

	delete pNumber;

	char* pCharacter = new char;

	*pCharacter = 'A';

	cout << pCharacter << endl;
	cout << *pCharacter << endl;

	delete pCharacter;
}

void DynamicArray()
{

	int* pArray = new int[5];

	pArray[0] = 10;

	cout << pArray[0] << endl;

	for (int i = 0; i < 5; i++) {
		pArray[i] = i;
	}

	for (int i = 0; i < 5; i++) {
		cout << pArray[i] << endl;
	}

	delete[] pArray;
}

void InputArraySize()
{
	int Size;
	cin >> Size;

	float* pValue = new float[Size];

	for (int i = 0; i < Size; i++) {
		pValue[i] = i * 1.5;
	}

	for (int i = 0; i < Size; i++) {
		cout << pValue[i] << " : ";
	}

	delete[] pValue;
}