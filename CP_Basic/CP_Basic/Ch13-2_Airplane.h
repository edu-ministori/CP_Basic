#pragma once

class Airplane
{
private:
	int Energy;
	int SpecialBombNumber;

public:
	int Temp;
	// Ŭ���� ���� ����� ���� �ѹ� ���� => �ʱ�ȭ
	// �⺻ ������(Default Constructor)
	Airplane();
	// �Ű����� ���� �޾Ƽ� Ŭ���� �ʱ�ȭ�� �� ���
	Airplane(int EnergyNumber, int BombNumber);

	~Airplane();

	void SetEnergy(int EnergyNumber);
	int GetEnergy();

	void SetBomb(int BombNumber);
	int GetBomb();

	void PrintEnergy();
	void PrintBomb();
};