#include "QualiyAssure.h"
#include <iostream>

using namespace std;

QualiyAssure::QualiyAssure()
{
	Part = "품질보증직군의 하루";
}


QualiyAssure::~QualiyAssure()
{
}

void QualiyAssure::work()
{
	cout << "게임의 오류를 찾아내고 피드백합니다." << endl;
}
