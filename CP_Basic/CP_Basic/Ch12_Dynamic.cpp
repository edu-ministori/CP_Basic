#include "io.h"

/*
	���� �Ҵ� : Static Allocation(Alloc)
	���� �Ҵ� : Dynamic Allocation

	*������ ���� ���� : �Ҵ�(Assign)
*/

void DynamicAlloc()
{
	int* pNumber = new int; // int type ���� ���� ����

	// pNumber : �ּ�
	*pNumber = 50;

	cout << pNumber << endl; // �ּ�
	cout << *pNumber << endl; // ��

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