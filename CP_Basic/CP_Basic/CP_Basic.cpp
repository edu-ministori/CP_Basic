// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Input/Output Stream

#define NUMBER 100

using namespace std;
// std::cout => cout

int main()
{
	//std::cout << "Hello World!\n";

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << endl; // endl : endline
	cout << NUMBER + 50 << endl;

	// 키워드, 예약어 : 선언문, 명령문
	// 키워드 : 변수 타입 선언

	int Number1; // 변수 선언
	Number1 = 10; // 초기값 대입

	int Number2 = 10; // 변수 선언 및 초기화

	int Number3 = 1, Number4 = 2;

	Number3 = 5;

	// 심볼릭 상수(Constant)
	const int Number5 = 10;

	// Number5 = 30; // 값을 수정할 수 없음

	// 데이터 타입 - 숫자 데이터 타입 - 정수형, 실수형

	// 정수형 타입(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	// 실수형 타입(float)
	float Num10 = 1.234f;
	double Num11 = 1.234;

	// 문자 데이터 : 문자(1개), 문자열(2개이상)
	// char : character
	// char 타입 문자 표현 : '' 사용
	// 문자열 : "" 사용
	char Letter = 'a';

	// bool 타입 데이터
	// 참/거짓 구분 : True/False, Yes/No, On/Off
	bool Condition = true;

	// auto 선언 키워드
	auto AutoNum = 10;

	cout << Number1 << endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// 증감 연산에는 반복 실행의 개념이 포함
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	Inc += 3;

	Inc = Inc + 1;
	Inc += 1;
	Inc++; // C => C++ => C++++

	Inc = Inc - 1;
	Inc -= 1;
	Inc--;

	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;

	/*
		비교 연산
		
		크기비교의 결과는 참/거짓 => 실제 출력 1/0

		true : 참 : 1
		false : 거짓 : 0
	*/


	int Compare1 = 10;
	int Compare2 = 20;

	// > : 크다, < : 작다 => 방향이 고정
	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 100) << endl;
	cout << (Compare1 == Compare2) << endl;
	cout << (Compare1 != Compare2) << endl;

	// 논리 연산 : bool 데이터 연산
	/*
		AND : && ( & : ampersand )

		true && true : true
		true && false : false
		=> bool 데이터가 모두 true일 때 결과가 true

		OR : ||  ( | : pipe )

		false || true : true
		false || false : false
		=> bool 데이터 중 하나만 true이면 결과가 true

		NOT : !

		!(false) => true

		bool 데이터의 결과값을 반대로 부정
	*/

	cout << ( (Compare1 < Compare2) && (Compare1 < 50) ) << endl;
	cout << (!(Compare1 < Compare2)) << endl;

	int Condition1 = 100;

	/*
		if가 포함하는 조건식의 원리
		: 결과값이 bool 데이터

		조건식의 종류
		- 비교연산식
		- bool 데이터
		- true -> 1, false -> 0
		- 산술 연산식
	*/
	if (Condition1 >= 50) {
		//참일때 실행구문
		cout << Condition1 << endl;
	}

	if(true){}
	if(false){}
	if(1){}
	if(0){}
	if(20){} // 0 : false, 이외의 정수 : true
	int Condition2 = 10;
	if(Condition2 + 5){}
	if( Condition >= 50 && Condition2 <= 10 ){}

	/*
		if(조건식1){
			// 조건식1이 참일때 실행 구문
		}

		if(조건식2){
			// 조건식2가 참일때 실행구문
		} else {
			// 조건식2가 거짓일때 실행구문
		}

		if(조건식3){
			// 조건식3이 참일때 실행구문
		} else if(조건식4){
			// 조건식4가 참일때 실행구문
		} else if(조건식5){
			// 조건식5가 참일때 실행구문
		} else {
			// 조건식이 모두 거짓일때 실행구문
		}
	*/

	// A,B 두 수를 입력받아 비교해서 결과 출력
	// 출력 : A>B => ">" , A<B => "<" , A=B => "=="
	int NumA = 0;
	int NumB = 0;

	//cin >> NumA;
	//cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

	// 시험점수 입력, 90~100:A , 80~89:B , 70~79:C , 60~69:D , 60미만:F
	int NumTest = 0;
	//cin >> NumTest;
	
	if (NumTest >= 90) {
		cout << "A" << endl;
	}
	else if (NumTest >= 80) {
		cout << "B" << endl;
	}
	else if (NumTest >= 70) {
		cout << "C" << endl;
	}
	else if (NumTest >= 60) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}

	// 상점에서 도둑이 들었는데, 목격자가 인상착의를 말했다.
	// 키는 약 180이상, 옷은 검정색 옷을 입고 있었다고 말했다.
	// 범인을 찾는 조건문을 작성하시오.
	// 옷색 입력값 : Black = B, White = W , Red = R 

	int TallNumber = 0;
	char ClothColor = NULL; // NULL : 문자값이 존재하지 않음

	cin >> TallNumber;
	cin >> ClothColor;

	// TallNumber >= 180
	// ClothColor == 'B'

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "범인" << endl;
	}
	else {
		cout << "시민" << endl;
	}

	// if 중첩
	/*
		if(조건식1){
			// 참일때 실행
			if(조건식2){
			}
		}
	*/
	/*
	* 180이상이고 검정색 옷 : 범인
	* 180이하이고 검정색 옷 : 용의자
	* 180이상이고 다른색 옷 : 용의자
	* 두 조건 모두 아니면 : 시민
	*/

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "범인" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "용의자" << endl;
	}
	else {
		cout << "시민" << endl;
	}

	// 중첩
	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "범인" << endl;
		}
		else {
			cout << "용의자" << endl;
		}
	}
	
	
	if(ClothColor == 'B'){
		if (TallNumber >= 180) {
			cout << "범인" << endl;
		}
		else {
			cout << "용의자" << endl;
		}
	}

	cout << "시민" << endl;


	
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
