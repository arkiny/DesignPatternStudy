#include "Entertainer.h"
#include <iostream>

using namespace std;

Entertainer::Entertainer()
{
	Part = "엔터테이너 직군의 하루";
}


Entertainer::~Entertainer()
{
}

void Entertainer::work()
{
	cout << "게임 아트와 사운드를 생산합니다." << endl;
}