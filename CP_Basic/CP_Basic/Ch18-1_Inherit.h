#pragma once

class CParent
{
protected:
	int Value3;

public:
	int Value1;

	CParent();
	~CParent();

	void Set(int Value3);
	
	void Func1();
	void Func3();

};

class CTest : public CParent
{
private:
	int Value1; // ������
	int Value2; // ���� ����

public:

	CTest();
	~CTest();

	void SetVal1(int Value1);
	void SetVal2(int Value2);

	int GetVal1();
	int GetVal2();

	void Func1(); // ������
	void Func2(); // ���� ����
};
/*
	�������̵�(������)

	�ڽ� Ŭ�������� �θ� Ŭ������ �ִ� �Լ�(����)�� ������ �̸���
	�Լ�(����)�� �ٽ� ����
*/