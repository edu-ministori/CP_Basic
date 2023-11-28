#pragma once

class Airplane
{
private:
	int Energy;
	int SpecialBombNumber;

public:
	// 클래스 선언 실행시 최초 한번 실행 => 초기화
	Airplane();
	~Airplane();

	void SetEnergy(int EnergyNumber);
	int GetEnergy();

	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
};