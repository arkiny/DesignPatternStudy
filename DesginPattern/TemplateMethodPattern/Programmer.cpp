#include "Programmer.h"
#include <iostream>

using namespace std;

Programmer::Programmer()
{
	Part = "테크 직군의 하루";
}


Programmer::~Programmer()
{
}

void Programmer::work()
{
	cout << "게임 코드를 구현합니다." << endl;
}