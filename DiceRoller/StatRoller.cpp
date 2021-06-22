#include <iostream>;

using namespace std;
void reroll();

void statRoller()
{
	int rolledStat{ 0 };
	int roll{ 0 }, rollCurrent{ 0 };
	int rollTotal[4] = {};
	
	while (rolledStat < 6)
	{
		roll = 0;
		
		while (roll < 4)
		{
			rollCurrent = rand() % 6 + 1;
			rollTotal[roll] = rollCurrent;
			roll++;
		}
		
		cout << "Stat " << rolledStat +1 << " - " << rollTotal[0]<<", " << rollTotal[1] << ", " << rollTotal[2] << rollTotal[3] << " = " << rollTotal[0] + rollTotal[1] + rollTotal[2] + rollTotal[3] << "\n";
		rolledStat++;
	}
	reroll();
}

void reroll()
{
	cout << "1 - Reroll stats\n2 - Return to menu\n";
	int selection{};
	cin >> selection;

	if (!cin)
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	switch (selection)
	{
	case 1:
		system("cls");
		statRoller();
		break;
	case 2:
		system("cls");
		return;
		break;
	default:
		break;
	}
}