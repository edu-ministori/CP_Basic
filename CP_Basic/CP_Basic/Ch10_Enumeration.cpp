#include "io.h"

void Enumeration()
{
	// Ÿ�� ����
	enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

	// ���� ����
	day DayName = Sun;

	// ���
	cout << DayName << endl;

	// ���� �� ����
	DayName = Wed;
	cout << DayName << endl;

	enum day DayName2 = Fri;
	cout << DayName2 << endl;

	cout << day::Thu << endl;
}