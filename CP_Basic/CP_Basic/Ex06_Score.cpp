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
	* 데이터 입력 방법
	* - 키보드 직접 입력
	* - 파일, Database 불러오기 => 변수에 저장
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

// 코드 => 수정/개선 => Refactoring