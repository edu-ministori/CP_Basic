#include "io.h"
#include "Ch13-1_ClassHeader.h"

/*
	���� ���� : ������ ������ ��𿡼� ������� ��� ���� ����

	Ŭ���� ���ο����� ��� ���� : private
	Ŭ���� �ܺο����� ��� ���� : public
	��ӵ� Ŭ�������� ��� ���� : protected

	private, public, protected Ű���带 ����ؼ� ���� ����
	Ű���带 ������� ������ default => private
*/

class Car
{
public:
	char Size = NULL;
	char Color = NULL;
	float Weight = 0.0f;

	void MoveFoward()
	{
		cout << "Move Foward" << Size << endl;
	}
	void MoveBackward()
	{
		cout << "Move Backward" << endl;
	}
	void Break()
	{
		cout << "Break" << endl;
	}
};

void DefineClass()
{	

	Car Ray;

	Ray.Size = 'S'; // (S)mall, (M)idium, (L)arge

	Ray.MoveFoward();

}

void PrintPlayer()
{
	Player Pino;

	Pino.SetData();

	Pino.PrintEnergy();
	Pino.PrintItemNumber();
	Pino.PrintWeapon();
}