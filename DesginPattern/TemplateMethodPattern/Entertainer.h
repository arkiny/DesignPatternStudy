#pragma once
#include "GameDeveloper.h"

class Entertainer : public GameDeveloper
{
public:
	Entertainer();
	virtual ~Entertainer();

protected:
	virtual void work() override;
};

