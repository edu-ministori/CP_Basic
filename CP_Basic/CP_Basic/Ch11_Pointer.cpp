#include "io.h"

void PointerVar()
{
	/*
		& : 주소 연산자 - 변수의 주소 표시
        * : 참조 연산자
		     - 포인터 변수 선언 사용
			 - 변수의 값 참조
	*/

	int a = 10; // a는 10의 값 저장

	int* pa = &a; // pa는 a의 주소 저장
	
	/*
		포인터 연산자(*) 구분 사용

		포인터 변수 선언 : int* pa
		참조 연산자 : *pa
	*/
	
	cout << "a값 : " << a << endl;
	cout << "a주소 : " << pa << endl;
	cout << "a주소 : " << &a << endl; // & : 주소 연산자
	cout << "a주소를 통해 값을 참조 : " << *pa << endl; // * : 참조 연산자

	/*
		int** ppa : 포인터 변수의 주소
	*/

	int** ppa = &pa;
	cout << "pa의 주소 : " << ppa << endl;

}

void PointerCalc()
{
	// 포인터 연산

	int a = 50;
	int* pa = &a;

	cout << a + 1 << endl; // 51
	cout << pa + 1 << endl; // pa 주소 + 1 => a값 주소 다음 칸 주소
	cout << *pa + 1 << endl; // 51
	cout << *(pa + 1) << endl; // a값 주소 다음 칸의 값
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