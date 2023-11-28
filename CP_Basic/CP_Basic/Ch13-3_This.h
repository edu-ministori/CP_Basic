#pragma once

class Phone
{
private:
	char Company;
	int ModelNumber;
public:
	Phone();
	Phone(char Company, int ModelNumber);
	~Phone();

	void PrintCompany();
	void PrintModelNumber();
};