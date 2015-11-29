#include "DogBrain.h"
#include <iostream>

using namespace std;

void AbstractDogBrain::Simulate()
{
	Bark();
	Bite();
}

void ImplDogBrain::Bark()
{
	cout << "개가 당신을 위협합니다." << endl;
}

void ImplDogBrain::Bite()
{
	cout << "개가 당신을 뭅니다. 크아앙" << endl;
}

void ImplDogBrain2::Bark()
{
	cout << "개2가 당신을 위협하는 사람을 위협합니다." << endl;
}

void ImplDogBrain2::Bite()
{
	cout << "개2가 당신을 위협하는 사람을 뭅니다. 크오아앙" << endl;
}