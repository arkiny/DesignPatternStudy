#include "Main.h"
#include "GameDeveloper.h"
#include "StudioPool.h"
#include <vector>

using namespace std;

int main()
{
	StudioPool studio;
	studio.Initialize();

	vector<GameDeveloper*>& Members = studio.GetMembers();
	
	vector<GameDeveloper*>::iterator it = Members.begin();
	while (it != Members.end())
	{
		(*it)->DailyRoutine();
		++it;
	}
	

	system("pause");

	return 0;
}