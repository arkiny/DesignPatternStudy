#include "Designer.h"
#include <iostream>

using namespace std;

Designer::Designer()
{
	Part = "�����̳� ������ �Ϸ�";
}


Designer::~Designer()
{
}

void Designer::work()
{
	cout << "������ �뷱��, ����, ����Ʈ���� ��ȹ�մϴ�." << endl;
}

void Designer::relax()
{
	cout << "������ �ϸ� ������ ���� ��ȹ�� ������ �մϴ�." << endl;
}