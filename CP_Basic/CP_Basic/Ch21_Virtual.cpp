#include "Ch21_Virtual.h"

// �����Լ� => Ŭ������ ��������, �Լ��� ���� ���ε�
// ���� ���ε� ���¿��� �Լ� �����ε��� �ϴ� ��� ������ ���� �� ����
// ���� �Լ��� ������ �� �����ε� ����

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