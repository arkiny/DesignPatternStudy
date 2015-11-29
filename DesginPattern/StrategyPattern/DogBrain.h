#pragma once
#include "IBrainSimulator.h"
class AbstractDogBrain : public IBrainSimulator
{
public:
	AbstractDogBrain(){}
	~AbstractDogBrain(){}
	void Simulate();
protected:
	virtual void Bark() = 0;
	virtual void Bite() = 0;
};


class ImplDogBrain : public AbstractDogBrain
{
public:
	ImplDogBrain(){}
	~ImplDogBrain(){}

protected:
	void Bark() override;
	void Bite() override;
};


class ImplDogBrain2 : public AbstractDogBrain
{
public:
	ImplDogBrain2(){}
	~ImplDogBrain2(){}

protected:
	void Bark() override;
	void Bite() override;
};