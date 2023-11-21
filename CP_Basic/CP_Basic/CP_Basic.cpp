// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Input/Output Stream

#define NUMBER 100

using namespace std;
// std::cout => cout

int main()
{
	//std::cout << "Hello World!\n";

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << endl; // endl : endline
	cout << NUMBER + 50 << endl;

	// Ű����, ����� : ����, ��ɹ�
	// Ű���� : ���� Ÿ�� ����

	int Number1; // ���� ����
	Number1 = 10; // �ʱⰪ ����

	int Number2 = 10; // ���� ���� �� �ʱ�ȭ

	int Number3 = 1, Number4 = 2;

	Number3 = 5;

	// �ɺ��� ���(Constant)
	const int Number5 = 10;

	// Number5 = 30; // ���� ������ �� ����

	// ������ Ÿ�� - ���� ������ Ÿ�� - ������, �Ǽ���

	// ������ Ÿ��(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	// �Ǽ��� Ÿ��(float)
	float Num10 = 1.234f;
	double Num11 = 1.234;

	// ���� ������ : ����(1��), ���ڿ�(2���̻�)
	// char : character
	// char Ÿ�� ���� ǥ�� : '' ���
	// ���ڿ� : "" ���
	char Letter = 'a';

	// bool Ÿ�� ������
	// ��/���� ���� : True/False, Yes/No, On/Off
	bool Condition = true;

	// auto ���� Ű����
	auto AutoNum = 10;

	cout << Number1 << endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// ���� ���꿡�� �ݺ� ������ ������ ����
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	Inc += 3;

	Inc = Inc + 1;
	Inc += 1;
	Inc++; // C => C++ => C++++

	Inc = Inc - 1;
	Inc -= 1;
	Inc--;

	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;

	/*
		�� ����
		
		ũ����� ����� ��/���� => ���� ��� 1/0

		true : �� : 1
		false : ���� : 0
	*/


	int Compare1 = 10;
	int Compare2 = 20;

	// > : ũ��, < : �۴� => ������ ����
	cout << (Compare1 > Compare2) << endl;
	cout << (Compare1 < Compare2) << endl;
	cout << (Compare1 >= 100) << endl;
	cout << (Compare1 == Compare2) << endl;
	cout << (Compare1 != Compare2) << endl;

	// �� ���� : bool ������ ����
	/*
		AND : && ( & : ampersand )

		true && true : true
		true && false : false
		=> bool �����Ͱ� ��� true�� �� ����� true

		OR : ||  ( | : pipe )

		false || true : true
		false || false : false
		=> bool ������ �� �ϳ��� true�̸� ����� true

		NOT : !

		!(false) => true

		bool �������� ������� �ݴ�� ����
	*/

	cout << ( (Compare1 < Compare2) && (Compare1 < 50) ) << endl;
	cout << (!(Compare1 < Compare2)) << endl;

	int Condition1 = 100;

	/*
		if�� �����ϴ� ���ǽ��� ����
		: ������� bool ������

		���ǽ��� ����
		- �񱳿����
		- bool ������
		- true -> 1, false -> 0
		- ��� �����
	*/
	if (Condition1 >= 50) {
		//���϶� ���౸��
		cout << Condition1 << endl;
	}

	if(true){}
	if(false){}
	if(1){}
	if(0){}
	if(20){} // 0 : false, �̿��� ���� : true
	int Condition2 = 10;
	if(Condition2 + 5){}
	if( Condition >= 50 && Condition2 <= 10 ){}

	/*
		if(���ǽ�1){
			// ���ǽ�1�� ���϶� ���� ����
		}

		if(���ǽ�2){
			// ���ǽ�2�� ���϶� ���౸��
		} else {
			// ���ǽ�2�� �����϶� ���౸��
		}

		if(���ǽ�3){
			// ���ǽ�3�� ���϶� ���౸��
		} else if(���ǽ�4){
			// ���ǽ�4�� ���϶� ���౸��
		} else if(���ǽ�5){
			// ���ǽ�5�� ���϶� ���౸��
		} else {
			// ���ǽ��� ��� �����϶� ���౸��
		}
	*/

	// A,B �� ���� �Է¹޾� ���ؼ� ��� ���
	// ��� : A>B => ">" , A<B => "<" , A=B => "=="
	int NumA = 0;
	int NumB = 0;

	//cin >> NumA;
	//cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

	// �������� �Է�, 90~100:A , 80~89:B , 70~79:C , 60~69:D , 60�̸�:F
	int NumTest = 0;
	//cin >> NumTest;
	
	if (NumTest >= 90) {
		cout << "A" << endl;
	}
	else if (NumTest >= 80) {
		cout << "B" << endl;
	}
	else if (NumTest >= 70) {
		cout << "C" << endl;
	}
	else if (NumTest >= 60) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}

	// �������� ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�.
	// Ű�� �� 180�̻�, ���� ������ ���� �԰� �־��ٰ� ���ߴ�.
	// ������ ã�� ���ǹ��� �ۼ��Ͻÿ�.
	// �ʻ� �Է°� : Black = B, White = W , Red = R 

	int TallNumber = 0;
	char ClothColor = NULL; // NULL : ���ڰ��� �������� ����

	cin >> TallNumber;
	cin >> ClothColor;

	// TallNumber >= 180
	// ClothColor == 'B'

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "����" << endl;
	}
	else {
		cout << "�ù�" << endl;
	}

	// if ��ø
	/*
		if(���ǽ�1){
			// ���϶� ����
			if(���ǽ�2){
			}
		}
	*/
	/*
	* 180�̻��̰� ������ �� : ����
	* 180�����̰� ������ �� : ������
	* 180�̻��̰� �ٸ��� �� : ������
	* �� ���� ��� �ƴϸ� : �ù�
	*/

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "����" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "������" << endl;
	}
	else {
		cout << "�ù�" << endl;
	}

	// ��ø
	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "����" << endl;
		}
		else {
			cout << "������" << endl;
		}
	}
	
	
	if(ClothColor == 'B'){
		if (TallNumber >= 180) {
			cout << "����" << endl;
		}
		else {
			cout << "������" << endl;
		}
	}

	cout << "�ù�" << endl;


	
}

// ��Ʈ�� ����Ʈ�� ���� ����
/*
	bit : ��ǻ�� ������ ������ �ּҴ���
	byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
	1byte = 8bit

	2���� ���� ������ : 0,1
	���� ���
	1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
	2^1 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

	�� ǥ��, ���� ǥ��, �������ּ� ǥ�� : 1byte �������� Ȯ��
*/
