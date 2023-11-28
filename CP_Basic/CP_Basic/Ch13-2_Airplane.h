#pragma once

class Airplane
{
private:
	int Energy;
	int SpecialBombNumber;

public:
	int Temp;
	// 클래스 선언 실행시 최초 한번 실행 => 초기화
	// 기본 생성자(Default Constructor)
	Airplane();
	// 매개변수 값을 받아서 클래스 초기화할 때 사용
	Airplane(int EnergyNumber, int BombNumber);

	~Airplane();

	void SetEnergy(int EnergyNumber);
	int GetEnergy();

	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
};