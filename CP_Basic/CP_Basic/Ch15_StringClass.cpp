#include "io.h"
#include <string>

/*
	String Ŭ����
	- ���ڿ��� �ٷ�� Ŭ����
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

	// sub string : �־��� ������ŭ ���
	// 5��° ���ں��� ���
	cout << Word.substr(5) << endl;
	// 5��° ���ں��� 9�� ���
	cout << Word.substr(5,9) << endl;

	Word2.push_back('A');
	cout << Word2 << endl;
	cout << Word2.size() << endl;
}