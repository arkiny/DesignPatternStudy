#pragma once
#include "GameDeveloper.h"
class Designer : public GameDeveloper
{
public:
	Designer();
	virtual ~Designer();

protected:
	virtual void work() override;
	virtual void relax() override;
};

