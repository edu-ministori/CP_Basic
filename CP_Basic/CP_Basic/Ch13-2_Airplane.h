#pragma once

class Airplane
{
private:
	int Energy;
	int SpecialBombNumber;

public:
	// Ŭ���� ���� ����� ���� �ѹ� ���� => �ʱ�ȭ
	Airplane();
	~Airplane();

	void SetEnergy(int EnergyNumber);
	int GetEnergy();

	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
};