#include "io.h"
#include "Ch13-3_This.h"

/*
	this ������ ��ü
	- Ŭ���� ���ο��� ���� �� Ŭ���� ��Ī
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