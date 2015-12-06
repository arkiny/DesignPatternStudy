#pragma once
#include <string>

class GameDeveloper
{
protected:
	std::string Part;

public:
	GameDeveloper();
	virtual ~GameDeveloper();

	void DailyRoutine();

protected:
	virtual void getUp();
	virtual void eatBreakFast();
	virtual void goToWork();
	virtual void work() = 0;
	virtual void returnToHome();
	virtual void relax();
	virtual void sleep();
};

