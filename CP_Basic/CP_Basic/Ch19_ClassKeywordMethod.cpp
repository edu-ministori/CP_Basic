#include "Ch19_ClassKeyword.h"
#include "io.h"

void Keyword::Func() const
{
	cout << Value1 << endl;
}

void Keyword::SFunc()
{
	cout << "SFunc" << endl;
}

int Keyword::Get() const
{
	return Value3;
}

const int Keyword::Print()
{
	// return ���� �׻� ������ ����
	// return ���� �׻� ����
	return 0;
}