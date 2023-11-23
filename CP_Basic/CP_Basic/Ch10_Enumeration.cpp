#include "io.h"

void Enumeration()
{
	// 타입 선언
	enum day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

	// 변수 선언
	day DayName = Sun;

	// 출력
	cout << DayName << endl;

	// 변수 값 변경
	DayName = Wed;
	cout << DayName << endl;

	enum day DayName2 = Fri;
	cout << DayName2 << endl;

	cout << day::Thu << endl;
}