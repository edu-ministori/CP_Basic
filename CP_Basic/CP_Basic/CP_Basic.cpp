#include "io.h"
#include "DefineFunction.h"

int main()
{
	// �Լ� ȣ��
	DefineFunction();
	CppBasic();



	

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

	//cin >> TallNumber;
	//cin >> ClothColor;

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
	else {
		if (ClothColor == 'B') {
			cout << "������" << endl;
		}
		else {
			cout << "�ù�" << endl;
		}
	}

	// switch ~ case
	/*
		switch�� �����ϴ� ������ �����
		: ����, ����
	*/
	/*
		switch(����){
			case �����1:
				���౸��1
			case �����2:
				���౸��2
			...
		}
	*/
	
	// ���� ��ȣ�� �Է¹޾� �ش� ��ȣ�� ���� �̸� ���
	// 0 : �Ͽ��� ~ 6 : �����
	int DayNum = 0;
	cout << "���Ϲ�ȣ�� �Է����ּ���[0~6] : ";
	//cin >> DayNum;
	switch (DayNum) {
		case 0:
			cout << "�Ͽ���" << endl;
			break;
		case 1:
			cout << "������" << endl;
			break;
		case 2:
			cout << "ȭ����" << endl;
			break;
		case 3:
			cout << "������" << endl;
			break;
		case 4:
			cout << "�����" << endl;
			break;
		case 5:
			cout << "�ݿ���" << endl;
			break;
		case 6:
			cout << "�����" << endl;
			break;
	}

	// �ݺ��� for : �ݺ� Ƚ���� ���ؼ� �ݺ� ����
	// �ݺ� : iterate, ���� : integer => for ���� i
	/*
		for(����1; ����2; ����3){}
		
		����1
		- for ������ ó�� ����� �� ���� �ѹ� ����Ǵ� ����
		- �ݺ� Ƚ���� �����ϴ� ���� ����

		����2
		- �ݺ� ����� �� ���� �񱳽� ����
		- ���Ǻ񱳽��� ������� ���϶� �ݺ� ����

		����3
		- �ڵ���� �ݺ� ����ɶ����� �ڵ�� ���� ���Ŀ� ����Ǵ� ����

		for(int i = 0; i < 10; i+=2){}
	*/

	// ���ǽĿ� ���Ǵ� ���� ���ڰ� �ݺ� Ƚ���� ��Ÿ������
	for (int i = 0; i < 10; i++) {
		cout << "Hello World" << endl;
	}

	int Total = 0;
	for (int i = 1; i <= 10; i++) {
		Total += i;
		cout << Total << endl;
	}
	cout << Total << endl;

	// ������ 2��
	int Dan2 = 0;
	for (int i = 1; i <= 9; i++) {
		Dan2 = 2 * i;
		cout << "2 x " << i << " = ";
		cout << Dan2 << endl;
	}

	// ��ø for
	// ������ ��ü
	int Dan = 0;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			Dan = i * j;
			cout << i << " x " << j << " = ";
			cout << Dan << endl;
		}
		cout << endl;
	}

	/*
		while : ���Ǻ񱳽��� ���ΰ�쿡 �����ϴ� ����

		while(���Ǻ񱳽�){}

		while(Total >= 200){}
		while(true){}
		while(1){}
	*/

	int iter = 10;
	while (iter < 10) {
		cout << "Hello World" << endl;
		iter++;
	}

	do {
		cout << "Hello World" << endl;
		iter++;
	} while (iter < 10);

	/*
	while (true) {
		�α��� �õ�
		���̵�/��� üũ
		�α��� ����
		break;
		�α��� ����
	}
	*/

	// �ݺ�Ƚ���� �Է¹ް�, �ݺ� �ɶ�����
	// �� �� A,B�� �Է¹޾� A+B�� ������� ǥ��

	int IterNumber = 0;
	int IterA = 0;
	int IterB = 0;

	//cin >> IterNumber;
	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;
		cout << IterA + IterB << endl;
	}

	// ����
	/*
		1. �ѱݾ� �Է�
		2. ���� ���� �� �Է� => �ݺ� Ƚ��
		3. �ݺ�����
		3-1. �� ���� ���� ���� �Է�
		3-2. �� ���� ���� �Է�
		3-3. �� ���� ���� ���� * ����
		3-4. �� ���� ��ü ������ ��� ����
		4. �Է¹��� �ѱݾװ� ��� ��� ���� ��
		5. 4���� ��� true => yes / false => no
	*/

	// 1.
	int TotalPrice = 0;
	cout << "�ѱݾ��� �Է����ּ��� : ";
	//cin >> TotalPrice;

	// 2.
	int SortNumber = 0;
	cout << "������ ���� ���� �Է����ּ��� : ";
	//cin >> SortNumber;

	// 3.
	int ProductPrice = 0;
	int ProductNumber = 0;
	int ProductTotalPrice = 0;
	int SumTotalPrice = 0;
	for (int i = 0; i < SortNumber; i++) {
		// 3-1.
		cout << "������ ���� ���� : ";
		//cin >> ProductPrice;
		// 3-2.
		cout << "������ ���� : ";
		//cin >> ProductNumber;
		// 3-3.
		ProductTotalPrice = ProductPrice * ProductNumber;
		// 3-4.
		SumTotalPrice = SumTotalPrice + ProductTotalPrice;
	}
	// 4,5.
	if (TotalPrice == SumTotalPrice) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	/*
	*  �ѱݾ� �Է� �ް�, �� ������ ���� * �ݾ� ������ �ѱݾװ�
	   ������ �� ���� �ݺ������ؼ� ������ ��

		1. �ѱݾ� �Է�
		2. �ݺ�����(while) : ���Ǻ� (�ѱݾ� != 0)
		2-1. �� ���� ���� ���� �Է�
		2-2. �� ���� ���� �Է�
		2-3. �� ���� ���� ���� * ���� = ���Ǵ� �ݾ�
		2-4. �ѱݾ� - ���Ǵ� �ݾ�
		3. Yes ���
	*/

	// 1.
	int TotalPrice1 = 0;
	cout << "�� �ݾ��� �Է����ּ��� : ";
	cin >> TotalPrice1;
	// 2.
	int ProductPrice1 = 0;
	int ProductNumber1 = 0;
	int ProductTotalPrice1 = 0;
	bool Zero = true;

	while (TotalPrice1 != 0) {
		if (TotalPrice1 < 0) {
			Zero = false;
			break;
		}
		// 2-1.
		cout << "���� ���� ���� �Է� : ";
		cin >> ProductPrice1;
		// 2-2.
		cout << "���� ���� �Է� : ";
		cin >> ProductNumber1;
		// 2-3.
		ProductTotalPrice1 = ProductPrice1 * ProductNumber1;
		// 2-4.
		TotalPrice1 = TotalPrice1 - ProductTotalPrice1;
	}
	if (Zero == false) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}

}

// �Լ� ����
void DefineFunction()
{
	cout << "Hello Function" << endl;
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
