#include "io.h"

// 1) if~else를 이용하여 입력받은 정수의 짝수/홀수 여부를 출력
void EvenOdd()
{
	int Number = 0;
	cin >> Number;

	if (Number % 2 == 0) {
		cout << "짝수" << endl;
	}
	else {
		cout << "홀수" << endl;
	}
}

// 5) for, if, continue 키워드를 사용하여 1~100까지 짝수만 출력
// continue : continue 키워드 이후의 코드를 실행하지 않고 통과
void PrintEven()
{
	for (int i = 1; i <= 100; i++) {
		// 1.
		/*
		if (i % 2 == 0) {
			cout << i << endl;
		}
		else {
			continue;
		}
		*/
		// 2.
		/*
		if (i % 2 != 0) {
			continue;
		}
		else {
			cout << i << endl;
		}
		*/

		// 3.
		if (i % 2 != 0) {
			continue;
		}
		cout << i << endl;

	}
}
