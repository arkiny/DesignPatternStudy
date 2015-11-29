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
	cout << "���� ����� �����մϴ�." << endl;
}

void ImplDogBrain::Bite()
{
	cout << "���� ����� ���ϴ�. ũ�ƾ�" << endl;
}

void ImplDogBrain2::Bark()
{
	cout << "��2�� ����� �����ϴ� ����� �����մϴ�." << endl;
}

void ImplDogBrain2::Bite()
{
	cout << "��2�� ����� �����ϴ� ����� ���ϴ�. ũ���ƾ�" << endl;
}