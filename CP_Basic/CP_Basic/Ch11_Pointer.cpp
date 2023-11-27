#include "io.h"

void PointerVar()
{
	/*
		& : �ּ� ������ - ������ �ּ� ǥ��
        * : ���� ������
		     - ������ ���� ���� ���
			 - ������ �� ����
	*/

	int a = 10; // a�� 10�� �� ����

	int* pa = &a; // pa�� a�� �ּ� ����
	
	/*
		������ ������(*) ���� ���

		������ ���� ���� : int* pa
		���� ������ : *pa
	*/
	
	cout << "a�� : " << a << endl;
	cout << "a�ּ� : " << pa << endl;
	cout << "a�ּ� : " << &a << endl; // & : �ּ� ������
	cout << "a�ּҸ� ���� ���� ���� : " << *pa << endl; // * : ���� ������

	/*
		int** ppa : ������ ������ �ּ�
	*/

	int** ppa = &pa;
	cout << "pa�� �ּ� : " << ppa << endl;

}

void PointerCalc()
{
	// ������ ����

	int a = 50;
	int* pa = &a;

	cout << a + 1 << endl; // 51
	cout << pa + 1 << endl; // pa �ּ� + 1 => a�� �ּ� ���� ĭ �ּ�
	cout << *pa + 1 << endl; // 51
	cout << *(pa + 1) << endl; // a�� �ּ� ���� ĭ�� ��
}

void PointerArray()
{
	int Array[3] = { 10,20,30 };

	int* pArray = Array;

	cout << pArray << endl;
	cout << Array << endl;

	cout << Array[0] << endl;
	cout << pArray[0] << endl;

	cout << *Array << endl;
	cout << *pArray << endl;

	cout << *pArray + 1 << endl; // 11
	cout << *(pArray + 1) << endl; // 20

}