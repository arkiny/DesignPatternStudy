#include "GameDeveloper.h"
#include <iostream>

using namespace std;

GameDeveloper::GameDeveloper()
{
}


GameDeveloper::~GameDeveloper()
{
}

void GameDeveloper::DailyRoutine()
{
	cout << Part << "�� �����帳�ϴ�." << endl;

	getUp();
	eatBreakFast();
	goToWork();
	work();
	returnToHome();
	relax(); 
	sleep();

	cout << endl;
}

void GameDeveloper::getUp()
{
	cout << "����� �Ͼ�ϴ�. ��������" << endl;
}

void GameDeveloper::eatBreakFast()
{
	cout << "��ħ�� �Դµ� ���µ� �Խ��ϴ�." << endl;
}

void GameDeveloper::goToWork()
{
	cout << "���� ���� ���뿡 ���� ����մϴ�." << endl;
}

void GameDeveloper::returnToHome()
{
	cout << "��ģ ���� �̲��� ���� ���ƿɴϴ�." << endl;
}

void GameDeveloper::relax()
{
	cout << "������ �ϸ� ���ϴ�." << endl;
}

void GameDeveloper::sleep()
{
	cout << "�Ǵٸ� ������ ����ϸ� ���� ��ϴ�." << endl;
}