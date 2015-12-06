#include "Designer.h"
#include <iostream>

using namespace std;

Designer::Designer()
{
	Part = "디자이너 직군의 하루";
}


Designer::~Designer()
{
}

void Designer::work()
{
	cout << "게임의 밸런스, 월드, 퀘스트등을 계획합니다." << endl;
}

void Designer::relax()
{
	cout << "게임을 하며 마무리 못한 기획을 마무리 합니다." << endl;
}