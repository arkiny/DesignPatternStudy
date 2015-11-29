#pragma once

#include "IBrainSimulator.h"

class AbstractCatBrain : public IBrainSimulator
{
public:
	AbstractCatBrain(){}
	~AbstractCatBrain(){}
	void Simulate();
protected:
	virtual void Run() = 0;
	virtual void Catch() = 0;
	virtual void RunAway() = 0;
};


class ImplCatBrain : public AbstractCatBrain
{
public:
	ImplCatBrain(){}
	~ImplCatBrain(){}

protected:
	void Run() override;
	void Catch() override;
	void RunAway() override;
};


class ImplCatBrain2 : public AbstractCatBrain
{
public:
	ImplCatBrain2(){}
	~ImplCatBrain2(){}

protected:
	void Run() override;
	void Catch() override;
	void RunAway() override;
};