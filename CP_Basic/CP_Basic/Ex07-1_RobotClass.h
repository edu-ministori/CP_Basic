#pragma once
#include <string>

/*
	1) CRobot 클래스 -  Set, Print
	2) CRobot 클래스 => 로봇 명세(데이터)를 모두 출력
*/

class CRobot
{
private:
	std::string Name;
	int Height;
	int Weight;
	int HP;
public:
	void Set(std::string Name,int Height,int Weight,int HP);
	void Print();
};