#pragma once
#include "GameDeveloper.h"

class ProjectManager : public GameDeveloper
{
public:
	ProjectManager();
	virtual ~ProjectManager();

protected:
	virtual void work() override;
};

