#pragma once
#include "GameDeveloper.h"

class Programmer : public GameDeveloper
{
public:
	Programmer();
	virtual ~Programmer();

protected:
	virtual void work() override;
};

