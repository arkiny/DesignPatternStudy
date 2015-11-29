#include "main.h"
#include <iostream>
#include <vector>
#include "IBrainSimulator.h"
#include "CatBrain.h"
#include "DogBrain.h"


int main()
{
	std::vector<IBrainSimulator*> AnimBrainSim;
	AnimBrainSim.push_back(new ImplCatBrain());
	AnimBrainSim.push_back(new ImplDogBrain());
	AnimBrainSim.push_back(new ImplDogBrain2());
	AnimBrainSim.push_back(new ImplCatBrain2());

	
	for (std::vector<IBrainSimulator*>::iterator it(AnimBrainSim.begin()); it != AnimBrainSim.end(); ++it)
	{
		(*it)->Simulate();	
	}


	while (!AnimBrainSim.empty())
	{
		IBrainSimulator* Remove = AnimBrainSim.back();
		AnimBrainSim.pop_back();
		delete Remove;
		Remove = nullptr;
	}

	system("pause");

	return 0;
}