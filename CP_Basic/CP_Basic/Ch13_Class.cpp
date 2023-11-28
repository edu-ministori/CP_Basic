#include "io.h"
#include "Ch13-1_ClassHeader.h"

/*
	정보 은닉 : 데이터 변수를 어디에서 사용할지 사용 범위 결정

	클래스 내부에서만 사용 가능 : private
	클래스 외부에서도 사용 가능 : public
	상속된 클래스에서 사용 가능 : protected

	private, public, protected 키워드를 사용해서 범위 결정
	키워드를 사용하지 않으면 default => private
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