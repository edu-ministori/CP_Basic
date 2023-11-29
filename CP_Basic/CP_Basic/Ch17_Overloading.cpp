/*
	중복 선언(Overloading : 오버로딩)
	- 함수(메소드) 오버로딩
	- 연산자 오버로딩

	: 동일한 이름의 함수를 여러가지 매개변수(데이터 타입,개수)에 
	  대응할 수 있도록 정의
	Ex) void Print(){}
	    void Print(int a){}
		void Print(float b){}
		void Print(int a, int b){}

		Print();
		Print(10);
		Print(1.1);
		Print(10,20);

	: 동일한 연산자를 여러가지 데이터 타입, 개수에 대응할 수
	  있도록 정의

	  10 + 10
	  1.1 + 1.5
*/
#include "io.h"
#include "Ch17-1_OverloadingClass.h"

void OverloadingFunction()
{
	/*
	Overloading Over;
	
	Over.Print();
	Over.Print(100);
	Over.Print("주커버그");
	Over.Print(200, "스티브잡스");
	*/

	// 연산자 오버로딩 : 클래스 내부 변수 값 덧셈
	// 첫번째 클래스 객체 생성
	Overloading t1;
	t1.Value = 1;

	// 두번째 클래스 객체 생성
	Overloading t2;
	t2.Value = 2;

	// 두개의 클래스 객체 덧셈
	Overloading Result = t1 + t2;
	cout << Result.Value << endl;
}