#include "Ch21_Virtual.h"

// 가상함수 => 클래스의 동적생성, 함수의 동적 바인딩
// 정적 바인딩 상태에서 함수 오버로딩을 하는 경우 문제가 생길 수 있음
// 가상 함수로 선언한 후 오버로딩 구현

void Virtual()
{
	Parent* pParent = new Parent;
	Child* pChild = new Child;

	pParent->PrintClass();

	pParent = pChild;

	pParent->PrintClass();


	VParent* pVParent = new VParent;
	VChild* pVChild = new VChild;

	pVParent->PrintClass();

	pVParent = pVChild;

	pVParent->PrintClass();

}