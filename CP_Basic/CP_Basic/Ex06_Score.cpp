/*
	네 학생의 국/영/수 성적을 이용해서 각 학생의 총점과 평균을 계산

	평균점수 : 90~100 : A, 80~89 : B, 70~79 : C, 60~69 : D , 나머지 : F

	   국어 | 영어 | 수학| 
	W | 100 | 100 | 50 | 
	X | 90  | 70  | 80 |
	Y | 70  | 80  | 90 |
	Z | 80  | 100 | 90 |
*/

#include "Ex06_ScoreClass.h"
#include "io.h"

void Score()
{
	Student st01('W', 100, 100, 50);
	Student st02('X', 90, 70, 80);
	Student st03('Y', 70, 80, 90);
	Student st04('Z', 80, 100, 90);

	st01.OperationTotal();
	st01.OperationAverage();
	st01.OperationGrade();
	st01.PrintScore();

	st02.OperationTotal();
	st02.OperationAverage();
	st02.OperationGrade();
	st02.PrintScore();

	st03.OperationTotal();
	st03.OperationAverage();
	st03.OperationGrade();
	st03.PrintScore();

	st04.OperationTotal();
	st04.OperationAverage();
	st04.OperationGrade();
	st04.PrintScore();
}

// 코드 => 수정/개선 => Refactoring