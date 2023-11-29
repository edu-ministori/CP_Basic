#include "io.h"
#include <array>

/*
	C++ STL(Standard Library : ǥ�ض��̺귯��)
	(* ���̺귯�� : Ŭ���� ��ü, �Լ��� ��Ƴ��� ��)
	(* ���̺귯��, �����ӿ�ũ, ���� : Ư�� ����� ��Ƽ� App, Game ������ �� ����� �� �ְ� ���� ��)

	Array(�迭) Ŭ����, String(���ڿ�) Ŭ����

	Array, String Ŭ���� ����
	- �� Ŭ������ ���Ե� ������Ƽ, �޼ҵ带 ���
*/

void ArrayClass()
{
	array<int, 3> Number = { 10,20,30 };

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.at(1) << endl; 
	cout << Number[1] << endl;

	for (int i = 0; i < Number.size(); i++) {
		cout << Number.at(i) << endl;
	}
}