#pragma once
class Keyword
{
public:
	int Value1;
	// static Ű���尡 ���Ǹ�
	// ���� ����ó�� ����
	static int Value2;

	// ��� : �ʱ�ȭ
	const int Value3 = 10;

	void Func() const;
	// ���� �Լ�
	static void SFunc();

	int Get() const;

	const int Print();
};