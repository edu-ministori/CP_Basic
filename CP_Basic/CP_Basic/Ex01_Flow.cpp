#include "io.h"

// 1) if~else�� �̿��Ͽ� �Է¹��� ������ ¦��/Ȧ�� ���θ� ���
void EvenOdd()
{
	int Number = 0;
	cin >> Number;

	if (Number % 2 == 0) {
		cout << "¦��" << endl;
	}
	else {
		cout << "Ȧ��" << endl;
	}
}

// 5) for, if, continue Ű���带 ����Ͽ� 1~100���� ¦���� ���
// continue : continue Ű���� ������ �ڵ带 �������� �ʰ� ���
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
