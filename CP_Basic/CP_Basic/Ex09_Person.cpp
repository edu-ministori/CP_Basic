#include "Ex09_Person.h"

void PrintStudent()
{
	CStudent s1;

	// �̸�(Name), ����(Age), ����(Gender)
	// => CPerson Class�� �ִ� ���� ���
	// ID, ���� => CStudent Class���� ���
	s1.Set("�赹��", 22, 1, 1000, "�κ� ����");
	s1.Print();

	CStudent s2;

	s2.Set("��û��", 18, 2, 1001, "�պ�");
	s2.Print();
}