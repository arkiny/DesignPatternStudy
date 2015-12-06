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
	cout << Part << "를 보여드립니다." << endl;

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
	cout << "힘겹게 일어납니다. 끄얽으억" << endl;
}

void GameDeveloper::eatBreakFast()
{
	cout << "아침을 먹는둥 마는둥 먹습니다." << endl;
}

void GameDeveloper::goToWork()
{
	cout << "만원 대중 교통에 끼여 출근합니다." << endl;
}

void GameDeveloper::returnToHome()
{
	cout << "지친 몸을 이끌고 집에 돌아옵니다." << endl;
}

void GameDeveloper::relax()
{
	cout << "게임을 하며 쉽니다." << endl;
}

void GameDeveloper::sleep()
{
	cout << "또다른 내일을 기약하며 잠이 듭니다." << endl;
}