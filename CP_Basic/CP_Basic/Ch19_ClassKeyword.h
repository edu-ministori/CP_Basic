#pragma once
class Keyword
{
public:
	int Value1;
	// static 키워드가 사용되면
	// 전역 변수처럼 동작
	static int Value2;

	// 상수 : 초기화
	const int Value3 = 10;

	void Func() const;
	// 전역 함수
	static void SFunc();

	int Get() const;

	const int Print();
};