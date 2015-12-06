#include "ProjectManager.h"
#include <iostream>

using namespace std;

ProjectManager::ProjectManager()
{
	Part = "개발지원 직군의 하루";
}


ProjectManager::~ProjectManager()
{
}

void ProjectManager::work()
{
	cout << "개별 일정을 확인하고, 피드백을 합니다." << endl;
}