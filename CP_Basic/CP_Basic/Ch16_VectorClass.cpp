#include "io.h"
#include <vector>

void VectorClass()
{
	vector<int> VectorNumber;

	cout << VectorNumber.size() << endl;
	
	VectorNumber.push_back(10);

	cout << VectorNumber.size() << endl;

	VectorNumber.push_back(20);

	cout << VectorNumber.size() << endl;

	VectorNumber.pop_back();

	cout << VectorNumber.size() << endl;

	vector<int> Number(3); // ���� ����
	vector<int> Number2(3, 2); // ���� ����, ���ҳ��� ����
}