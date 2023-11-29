#pragma once

class Student
{
private:
	char Name;
	int Kor;
	int Eng;
	int Math;
	int Total;
	float Average;
	char Grade;

public:
	Student();
	Student(char Name, int Kor, int Eng, int Math);
	~Student();

	void Set(char Name, int Kor, int Eng, int Math);
	int OperationTotal();
	float OperationAverage();
	char OperationGrade();
	void PrintScore();
};