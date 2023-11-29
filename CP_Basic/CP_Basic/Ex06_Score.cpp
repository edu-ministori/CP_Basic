/*
	�� �л��� ��/��/�� ������ �̿��ؼ� �� �л��� ������ ����� ���

	������� : 90~100 : A, 80~89 : B, 70~79 : C, 60~69 : D , ������ : F

	   ���� | ���� | ����| 
	W | 100 | 100 | 50 | 
	X | 90  | 70  | 80 |
	Y | 70  | 80  | 90 |
	Z | 80  | 100 | 90 |
*/

#include "Ex06_ScoreClass.h"
#include "io.h"

void Score()
{
	/*
	Student st01('W', 100, 100, 50);
	Student st02('X', 90, 70, 80);
	Student st03('Y', 70, 80, 90);
	Student st04('Z', 80, 100, 90);

	st01.PrintScore();
	st02.PrintScore();
	st03.PrintScore();
	st04.PrintScore();
	*/

	/*
	* ������ �Է� ���
	* - Ű���� ���� �Է�
	* - ����, Database �ҷ����� => ������ ����
	*/ 
	
	char Name[4] = {'W','X','Y','Z'};

	int Score[4][3] = {
		{100,100,50},
		{90,70,80},
		{70,80,90},
		{80,100,90}
	};
	
	Student st[4];
	for (int i = 0; i < 4; i++) {
		st[i].Set(Name[i], Score[i][0], Score[i][1], Score[i][2]);
	}

	for (int i = 0; i < 4; i++) {
		st[i].PrintScore();
	}
	
}

// �ڵ� => ����/���� => Refactoring