#include "CatBrain.h"
#include <iostream>

using namespace std;
	
void AbstractCatBrain::Simulate()
{
	Run();
	Catch();
	RunAway();
}


void ImplCatBrain::Run()
{
	cout << "고양이1이 맹렬하게 뜁니다" << endl;
}

void ImplCatBrain::Catch()
{
	cout << "고양이1이 쥐를 파악 잡습니다." << endl;
}

void ImplCatBrain::RunAway()
{
	cout << "고양이1이 빠르게 도망갑니다." << endl;
}

void ImplCatBrain2::Run()
{
	cout << "고양이2가 날렵히 뜁니다" << endl;
}
void ImplCatBrain2::Catch()
{
	cout << "고양이2가 쥐를 콱 잡습니다." << endl;
}
void ImplCatBrain2::RunAway()
{
	cout << "고양이2가 사사삭 빠르게 도망갑니다." << endl;
}
