#include "Ch19_ClassKeyword.h"
#include "io.h"

int Keyword::Value2 = 2;

void ClassKeyword()
{

	Keyword T1;
	T1.Value1 = 11;
	T1.Value2 = 12;
	T1.Func();
	T1.SFunc();

	Keyword T2;
	T2.Value1 = 21;
	T2.Value2 = 22;

	cout << T1.Value1 << " : " << T1.Value2 << endl;
	cout << T2.Value1 << " : " << T2.Value2 << endl;

	Keyword::SFunc(); // Static ÇÔ¼ö
}