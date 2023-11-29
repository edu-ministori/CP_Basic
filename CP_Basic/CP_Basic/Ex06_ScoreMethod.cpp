#include "io.h"
#include "Ex06_ScoreClass.h"

Student::Student()
{
	this->Total = 0;
	this->Average = 0.0f;
	this->Grade = NULL;
}

Student::Student(char Name, int Kor, int Eng, int Math)
{
	this->Name = Name;
	this->Kor = Kor;
	this->Eng = Eng;
	this->Math = Math;
	this->Total = 0;
	this->Average = 0.0f;
	this->Grade = NULL;
}

Student::~Student(){}

void Student::Set(char Name, int Kor, int Eng, int Math)
{
	this->Name = Name;
	this->Kor = Kor;
	this->Eng = Eng;
	this->Math = Math;
}

int Student::OperationTotal()
{
	this->Total = this->Kor + this->Eng + this->Math;

	return this->Total;
}

float Student::OperationAverage()
{
	this->Average = this->Total / 3;

	return this->Average;
}

char Student::OperationGrade()
{
	if (this->Average >= 90) {
		this->Grade = 'A';
	}
	else if (this->Average >= 80) {
		this->Grade = 'B';
	}
	else if (this->Average >= 70) {
		this->Grade = 'C';
	}
	else if (this->Average >= 60) {
		this->Grade = 'D';
	}
	else {
		this->Grade = 'F';
	}

	return this->Grade;
}

void Student::PrintScore()
{
	this->OperationTotal();
	this->OperationAverage();
	this->OperationGrade();

	cout << this->Name << " : " <<
		this->Kor << " : " <<
		this->Eng << " : " <<
		this->Math << " : " <<
		this->Total << " : " <<
		this->Average << " : " <<
		this->Grade << endl;
}