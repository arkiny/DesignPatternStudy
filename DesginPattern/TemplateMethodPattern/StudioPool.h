#pragma once
#include <vector>

class GameDeveloper;

class StudioPool
{
private:
	std::vector<GameDeveloper*> Members;

public:
	StudioPool();
	virtual ~StudioPool();

	void Initialize();
	std::vector<GameDeveloper*>& GetMembers();
};

