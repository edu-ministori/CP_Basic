#include "io.h"
#include <array>

/*
	C++ STL(Standard Library : 표준라이브러리)
	(* 라이브러리 : 클래스 객체, 함수를 모아놓은 것)
	(* 라이브러리, 프레임워크, 엔진 : 특정 기능을 모아서 App, Game 개발할 때 사용할 수 있게 만든 것)

	Array(배열) 클래스, String(문자열) 클래스

	Array, String 클래스 선언
	- 각 클래스에 포함된 프로퍼티, 메소드를 사용
*/

void ArrayClass()
{
	array<int, 3> Number = { 10,20,30 };

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.at(1) << endl; 
	cout << Number[1] << endl;

	for (int i = 0; i < Number.size(); i++) {
		cout << Number.at(i) << endl;
	}
}