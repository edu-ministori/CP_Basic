#include "Ex09_Person.h"
#include <string>
#include <iostream>

using namespace std;

void CPerson::Set(string Name, int Age, int Gender)
{
	this->Name = Name;
	this->Age = Age;
	this->Gender = Gender;
}

string CPerson::GetName()
{
	return this->Name;
}

int CPerson::GetAge() {
	return this->Age;
}

int CPerson::GetGender()
{
	return this->Gender;
}

void CStudent::Set(string Name, int Age, int Gender, int ID, string Major)
{
	CPerson::Set(Name, Age, Gender);

	this->ID = ID;
	this->Major = Major;
}

void CStudent::Print()
{
	cout << "---------------------------" << endl;
	cout << "이름: " << GetName() << endl;
	cout << "나이: " << GetAge() << endl;
	if (GetGender() == 1)
	{
		cout << "성별: 남성" << endl;
	}
	else {
		cout << "성별: 여성" << endl;
	}
	cout << "ID: " << ID << endl;
	cout << "전공: " << Major << endl;
}