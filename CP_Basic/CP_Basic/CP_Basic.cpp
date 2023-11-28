#include "io.h"
#include "DefineFunction.h"

// 함수 원형 선언 : main함수 위에 선언
void DefineFunction();

int main()
{
	// 함수 호출
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

// 함수 정의 : main함수 뒤에 정의
void DefineFunction()
{
	cout << "Hello Function" << endl;
}

// 비트와 바이트에 대한 이해
/*
	bit : 컴퓨터 데이터 저장의 최소단위
	byte : 컴퓨터 정보 저장의 최소단위(8bit)
	1byte = 8bit

	2진수 숫자 데이터 : 0,1
	진법 계산
	1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
	2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

	색 표현, 문자 표현, 아이피주소 표현 : 1byte 기준으로 확장
*/
