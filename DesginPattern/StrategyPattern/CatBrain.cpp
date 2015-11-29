#include "CatBrain.h"
#include <iostream>

using namespace std;
	
void AbstractCatBrain::Simulate()
{
	Run();
	Catch();
	RunAway();
}


void ImplCatBrain::Run()
{
	cout << "�����1�� �ͷ��ϰ� �ݴϴ�" << endl;
}

void ImplCatBrain::Catch()
{
	cout << "�����1�� �㸦 �ľ� ����ϴ�." << endl;
}

void ImplCatBrain::RunAway()
{
	cout << "�����1�� ������ �������ϴ�." << endl;
}

void ImplCatBrain2::Run()
{
	cout << "�����2�� ������ �ݴϴ�" << endl;
}
void ImplCatBrain2::Catch()
{
	cout << "�����2�� �㸦 �� ����ϴ�." << endl;
}
void ImplCatBrain2::RunAway()
{
	cout << "�����2�� ���� ������ �������ϴ�." << endl;
}
