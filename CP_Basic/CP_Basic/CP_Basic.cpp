#include "io.h"
#include "DefineFunction.h"

int main()
{
	// 함수 호출
	DefineFunction();
	CppBasic();



	

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

	//cin >> TallNumber;
	//cin >> ClothColor;

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
	else {
		if (ClothColor == 'B') {
			cout << "용의자" << endl;
		}
		else {
			cout << "시민" << endl;
		}
	}

	// switch ~ case
	/*
		switch가 포함하는 수식의 결과값
		: 정수, 문자
	*/
	/*
		switch(수식){
			case 결과값1:
				실행구문1
			case 결과값2:
				실행구문2
			...
		}
	*/
	
	// 요일 번호를 입력받아 해당 번호의 요일 이름 출력
	// 0 : 일요일 ~ 6 : 토요일
	int DayNum = 0;
	cout << "요일번호를 입력해주세요[0~6] : ";
	//cin >> DayNum;
	switch (DayNum) {
		case 0:
			cout << "일요일" << endl;
			break;
		case 1:
			cout << "월요일" << endl;
			break;
		case 2:
			cout << "화요일" << endl;
			break;
		case 3:
			cout << "수요일" << endl;
			break;
		case 4:
			cout << "목요일" << endl;
			break;
		case 5:
			cout << "금요일" << endl;
			break;
		case 6:
			cout << "토요일" << endl;
			break;
	}

	// 반복문 for : 반복 횟수를 정해서 반복 실행
	// 반복 : iterate, 정수 : integer => for 변수 i
	/*
		for(구문1; 구문2; 구문3){}
		
		구문1
		- for 구문이 처음 실행될 때 최초 한번 실행되는 구문
		- 반복 횟수를 결정하는 변수 선언

		구문2
		- 반복 실행될 때 조건 비교식 구문
		- 조건비교식의 결과값이 참일때 반복 실행

		구문3
		- 코드블럭이 반복 실행될때마다 코드블럭 실행 이후에 실행되는 구문

		for(int i = 0; i < 10; i+=2){}
	*/

	// 조건식에 사용되는 범위 숫자가 반복 횟수를 나타내도록
	for (int i = 0; i < 10; i++) {
		cout << "Hello World" << endl;
	}

	int Total = 0;
	for (int i = 1; i <= 10; i++) {
		Total += i;
		cout << Total << endl;
	}
	cout << Total << endl;

	// 구구단 2단
	int Dan2 = 0;
	for (int i = 1; i <= 9; i++) {
		Dan2 = 2 * i;
		cout << "2 x " << i << " = ";
		cout << Dan2 << endl;
	}

	// 중첩 for
	// 구구단 전체
	int Dan = 0;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			Dan = i * j;
			cout << i << " x " << j << " = ";
			cout << Dan << endl;
		}
		cout << endl;
	}

	/*
		while : 조건비교식이 참인경우에 실행하는 구문

		while(조건비교식){}

		while(Total >= 200){}
		while(true){}
		while(1){}
	*/

	int iter = 10;
	while (iter < 10) {
		cout << "Hello World" << endl;
		iter++;
	}

	do {
		cout << "Hello World" << endl;
		iter++;
	} while (iter < 10);

	/*
	while (true) {
		로그인 시도
		아이디/비번 체크
		로그인 성공
		break;
		로그인 실패
	}
	*/

	// 반복횟수를 입력받고, 반복 될때마다
	// 두 수 A,B를 입력받아 A+B의 결과값을 표시

	int IterNumber = 0;
	int IterA = 0;
	int IterB = 0;

	//cin >> IterNumber;
	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;
		cout << IterA + IterB << endl;
	}

	// 분해
	/*
		1. 총금액 입력
		2. 물건 종류 수 입력 => 반복 횟수
		3. 반복실행
		3-1. 각 물건 개당 가격 입력
		3-2. 각 물건 개수 입력
		3-3. 각 물건 개당 가격 * 개수
		3-4. 각 물건 전체 가격을 모두 덧셈
		4. 입력받은 총금액과 계산 결과 총합 비교
		5. 4번의 결과 true => yes / false => no
	*/

	// 1.
	int TotalPrice = 0;
	cout << "총금액을 입력해주세요 : ";
	//cin >> TotalPrice;

	// 2.
	int SortNumber = 0;
	cout << "물건의 종류 수를 입력해주세요 : ";
	//cin >> SortNumber;

	// 3.
	int ProductPrice = 0;
	int ProductNumber = 0;
	int ProductTotalPrice = 0;
	int SumTotalPrice = 0;
	for (int i = 0; i < SortNumber; i++) {
		// 3-1.
		cout << "물건의 개당 가격 : ";
		//cin >> ProductPrice;
		// 3-2.
		cout << "물건의 개수 : ";
		//cin >> ProductNumber;
		// 3-3.
		ProductTotalPrice = ProductPrice * ProductNumber;
		// 3-4.
		SumTotalPrice = SumTotalPrice + ProductTotalPrice;
	}
	// 4,5.
	if (TotalPrice == SumTotalPrice) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	/*
	*  총금액 입력 받고, 각 물건의 개수 * 금액 총합이 총금액과
	   같아질 때 까지 반복실행해서 같은지 비교

		1. 총금액 입력
		2. 반복실행(while) : 조건비교 (총금액 != 0)
		2-1. 각 물건 개당 가격 입력
		2-2. 각 물건 개수 입력
		2-3. 각 물건 개당 가격 * 개수 = 물건당 금액
		2-4. 총금액 - 물건당 금액
		3. Yes 출력
	*/

	// 1.
	int TotalPrice1 = 0;
	cout << "총 금액을 입력해주세요 : ";
	cin >> TotalPrice1;
	// 2.
	int ProductPrice1 = 0;
	int ProductNumber1 = 0;
	int ProductTotalPrice1 = 0;
	bool Zero = true;

	while (TotalPrice1 != 0) {
		if (TotalPrice1 < 0) {
			Zero = false;
			break;
		}
		// 2-1.
		cout << "물건 개당 가격 입력 : ";
		cin >> ProductPrice1;
		// 2-2.
		cout << "물건 개수 입력 : ";
		cin >> ProductNumber1;
		// 2-3.
		ProductTotalPrice1 = ProductPrice1 * ProductNumber1;
		// 2-4.
		TotalPrice1 = TotalPrice1 - ProductTotalPrice1;
	}
	if (Zero == false) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}

}

// 함수 정의
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
