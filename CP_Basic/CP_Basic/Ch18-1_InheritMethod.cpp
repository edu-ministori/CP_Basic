#include "Ch18-1_Inherit.h"
#include "io.h"

CParent::CParent(){}
CParent::~CParent(){}

void CParent::Set(int Value3) {
	cout << "Parent Set" << endl;
	this->Value3 = Value3;
}

void CParent::Func1()
{
	cout << "Parent Func1" << endl;
	this->Value1 = 1;
}

void CParent::Func3()
{
	cout << "Parent Func3" << endl;
}

CTest::CTest(){}
CTest::~CTest(){}

void CTest::SetVal1(int Value1)
{
	cout << "Child SetVal1" << endl;
	this->Value1 = Value1;
}

void CTest::SetVal2(int Value2)
{
	cout << "Child SetVal2" << endl;
	this->Value2 = Value2;
}

int CTest::GetVal1() {
	cout << "Child GetVal1" << endl;
	return Value1;
}

int CTest::GetVal2() {
	cout << "Child GetVal2" << endl;
	return Value2;
}

void CTest::Func1()
{
	cout << "Child Func1" << endl;
	Value1 = 2;
}

void CTest::Func2()
{
	cout << "Child Func2" << endl;
	Value2 = 3;
}