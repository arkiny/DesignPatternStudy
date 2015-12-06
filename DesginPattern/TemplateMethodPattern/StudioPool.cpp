#include "StudioPool.h"
#include "GameDeveloper.h"
#include "Designer.h"
#include "Entertainer.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "QualiyAssure.h"

StudioPool::StudioPool()
{
}


StudioPool::~StudioPool()
{
	while (!Members.empty())
	{
		GameDeveloper* Remove = Members.back();
		Members.pop_back();
		delete Remove;
		Remove = nullptr;
	}
}

void StudioPool::Initialize()
{
	Members.push_back(new Designer);
	Members.push_back(new Entertainer);
	Members.push_back(new Programmer);
	Members.push_back(new ProjectManager);
	Members.push_back(new QualiyAssure);
}

std::vector<GameDeveloper*>& StudioPool::GetMembers()
{
	return Members;
}
