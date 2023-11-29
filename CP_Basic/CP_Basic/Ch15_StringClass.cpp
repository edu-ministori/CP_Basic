#include "io.h"
#include <string>

/*
	String 클래스
	- 문자열을 다루는 클래스
*/

void StringClass()
{
	char Character = 'A';
	char Char[6] = "Hello";

	string Word = "Hello Object Oriented Programming";
	cout << Word << endl;

	string Word2("World");
	cout << Word2 << endl;

	cout << Word.size() << endl;
	cout << Word.front() << endl;
	cout << Word.back() << endl;

	// sub string : 주어진 범위만큼 출력
	// 5번째 문자부터 출력
	cout << Word.substr(5) << endl;
	// 5번째 문자부터 9개 출력
	cout << Word.substr(5,9) << endl;

	Word2.push_back('A');
	cout << Word2 << endl;
	cout << Word2.size() << endl;
}