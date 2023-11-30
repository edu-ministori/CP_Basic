#include "io.h"

/*
	형변환
	- 각각의 변수 타입을 변환
	- 변수에 저장되는 데이터의 타입이 변환된 것처럼
	  보이도록 표시
*/

void Type()
{
	int Kor = 90;
	int Eng = 80;
	int Math = 75;
	float Average = 0;

	// 1. 변수, 데이터값이 타입이 동일
	// 2. 연산 결과가 현실화 되는 결과값 고려
	// 형변환(Type Cast)
	
	//Average = float( (Kor + Eng + Math) / 3 );

	Average = ( float(Kor) + float(Eng) + float(Math) ) / 3;

	cout << Average << endl;
}