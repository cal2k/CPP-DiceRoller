#include <iostream>
#include <stdio.h>
#include <sqlite3.h>
#include <algorithm>

using namespace std;

sqlite3* db;
const char* dbDir = "D:\\Documents\\Programming\\Databases\\dnd.db";

static int callbacknew(void* NotUsed, int argc, char** argv, char** azColName);

string character, player, charClass, race, alignment, deity, size, age, gender, height, weight, eye, hair ;
int lvl = 1, speed, str, dex, con, inti, wis, cha;
int stats[6];

void abilityScore();

void newCharacter()
{
	abilityScore();
	
	system("pause");
}


void abilityScore()
{
	bool reroll = true;

	while (reroll)
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
			std::sort(std::rbegin(rollTotal), std::rend(rollTotal));

			stats[rolledStat] = rollTotal[0] + rollTotal[1] + rollTotal[3];
			rolledStat++;
		}
	}
}




void selectRace()
{
	int exit = sqlite3_open(dbDir, &db);
	string sql = "SELECT race FROM races ;";

	sqlite3_exec(db, sql.c_str(), callbacknew, NULL, NULL);

	system("pause");

	system("cls");
}

static int callbacknew(void* NotUsed, int argc, char** argv, char** azColName)
{
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i];
	}
	cout << "Race Name" << endl;
	string RaceName;
	cin >> RaceName;

	if (RaceName == "Dwarf" || "dwarf")
	{

	}
	if (RaceName == "Elf" || "elf")
	{

	}
	if (RaceName == "Gnome" || "gnome")
	{

	}
	if (RaceName == "Half-Elf" || "half-elf" || "Half Elf" ||"half elf")
	{

	}
	if (RaceName == "Halfling" || "halfling")
	{

	}
	if (RaceName == "Half-Orc" || "half-orc" ||"Half Orc" ||"half orc")
	{

	}
	if (RaceName == "Human" || "human")
	{

	}

	return 0;
}