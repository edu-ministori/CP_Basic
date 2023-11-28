#include "io.h"
#include "Ch13-3_This.h"

/*
	this 포인터 객체
	- 클래스 내부에서 사용될 때 클래스 지칭
*/

Phone::Phone()
{
	Company = NULL;
	ModelNumber = 0;
}

Phone::Phone(char Company, int ModelNumber)
{
	this->Company = Company;
	this->ModelNumber = ModelNumber;
}

Phone::~Phone()
{

}

void Phone::PrintCompany()
{

}

void Phone::PrintModelNumber()
{

}