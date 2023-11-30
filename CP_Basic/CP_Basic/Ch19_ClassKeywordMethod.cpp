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
	// return 값이 항상 변하지 않음
	// return 값이 항상 존재
	return 0;
}