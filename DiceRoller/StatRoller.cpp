#include <iostream>;
#include <algorithm>

using namespace std;
void statRollerMenu();
void assignStats();
void displayStats();
void assignSTR();
void assignDEX();
void assignCON();
void assignINT();
void assignWIS();
void assignCHA();

int Stats[6] = {};
int str{ 0 }, dex{ 0 }, con{ 0 }, inti{ 0 }, wis{ 0 }, cha{ 0 };

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
		std::sort(std::rbegin(rollTotal), std::rend(rollTotal));
		
		Stats[rolledStat] = rollTotal[0] + rollTotal[1] + rollTotal[3];

		rolledStat++;
	}
	statRollerMenu();
}

void statRollerMenu()
{
	bool validSelection = false;
	int selection{};

	while (!validSelection)
	{
		displayStats();

		cout << "1 - Reroll stats\n2 - Assign stats\n3 - Return to menu\n";
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
			validSelection = true;
			statRoller();
			break;
		case 2:
			system("cls");
			validSelection = true;
			assignStats();
			break;
		case 3:
			system("cls");
			validSelection = true;
			return;
			break;
		default:
			system("cls");
			break;
		}
	}
}

void displayStats()
{
	std::sort(std::rbegin(Stats), std::rend(Stats));
	int i{ 0 };
	while (i < 6)
	{
		cout << Stats[i] << "\n";
		i++;
	}
}

void assignStats()
{
	assignSTR();
	system("cls");
	assignDEX();
	system("cls");
	assignCON();
	system("cls");
	assignINT();
	system("cls");
	assignWIS();
	system("cls");
	assignCHA();
	system("cls");

	cout << "Str - " << str << "\nDex - " << dex << "\nCon - " << con << "\nInt - " << inti << "\nWis - " << wis << "\nCha - " << cha << "\n";
	system("pause");
	system("cls");
}

void assignSTR()
{
	bool valid = false;
	while (!valid)
	{
		displayStats();
		cout << "Strength - ";
		cin >> str;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (str == Stats[0])
		{
			str = Stats[0];
			Stats[0] = 0;
			valid = true;
			break;
		}
		if (str == Stats[1])
		{
			str = Stats[1];
			Stats[1] = 0;
			valid = true;
			break;
		}
		if (str == Stats[2])
		{
			str = Stats[2];
			Stats[2] = 0;
			valid = true;
			break;
		}
		if (str == Stats[3])
		{
			str = Stats[3];
			Stats[3] = 0;
			valid = true;
			break;
		}
		if (str == Stats[4])
		{
			str = Stats[4];
			Stats[4] = 0;
			valid = true;
			break;
		}
		if (str == Stats[5])
		{
			str = Stats[5];
			Stats[5] = 0;
			valid = true;
			break;
		}
	}
}

void assignDEX()
{
	bool valid = false;
	while (!valid)
	{
		displayStats();
		cout << "Dexterity - ";
		cin >> dex;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (dex == Stats[0])
		{
			dex = Stats[0];
			Stats[0] = 0;
			valid = true;
			break;
		}
		if (dex == Stats[1])
		{
			dex = Stats[1];
			Stats[1] = 0;
			valid = true;
			break;
		}
		if (dex == Stats[2])
		{
			dex = Stats[2];
			Stats[2] = 0;
			valid = true;
			break;
		}
		if (dex == Stats[3])
		{
			dex = Stats[3];
			Stats[3] = 0;
			valid = true;
			break;
		}
		if (dex == Stats[4])
		{
			dex = Stats[4];
			Stats[4] = 0;
			valid = true;
			break;
		}
		if (dex == Stats[5])
		{
			dex = Stats[5];
			Stats[5] = 0;
			valid = true;
			break;
		}
	}
}

void assignCON()
{
	bool valid = false;
	while (!valid)
	{
		displayStats();
		cout << "Constitution - ";
		cin >> con;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (con == Stats[0])
		{
			con = Stats[0];
			Stats[0] = 0;
			valid = true;
			break;
		}
		if (con == Stats[1])
		{
			con = Stats[1];
			Stats[1] = 0;
			valid = true;
			break;
		}
		if (con == Stats[2])
		{
			con = Stats[2];
			Stats[2] = 0;
			valid = true;
			break;
		}
		if (con == Stats[3])
		{
			con = Stats[3];
			Stats[3] = 0;
			valid = true;
			break;
		}
		if (con == Stats[4])
		{
			con = Stats[4];
			Stats[4] = 0;
			valid = true;
			break;
		}
		if (con == Stats[5])
		{
			con = Stats[5];
			Stats[5] = 0;
			valid = true;
			break;
		}
	}
}

void assignINT()
{
	bool valid = false;
	while (!valid)
	{
		displayStats();
		cout << "Intelligence - ";
		cin >> inti;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (inti == Stats[0])
		{
			inti = Stats[0];
			Stats[0] = 0;
			valid = true;
			break;
		}
		if (inti == Stats[1])
		{
			inti = Stats[1];
			Stats[1] = 0;
			valid = true;
			break;
		}
		if (inti == Stats[2])
		{
			inti = Stats[2];
			Stats[2] = 0;
			valid = true;
			break;
		}
		if (inti == Stats[3])
		{
			inti = Stats[3];
			Stats[3] = 0;
			valid = true;
			break;
		}
		if (inti == Stats[4])
		{
			inti = Stats[4];
			Stats[4] = 0;
			valid = true;
			break;
		}
		if (inti == Stats[5])
		{
			inti = Stats[5];
			Stats[5] = 0;
			valid = true;
			break;
		}
	}
}

void assignWIS()
{
	bool valid = false;
	while (!valid)
	{
		displayStats();
		cout << "Wisdon - ";
		cin >> wis;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (wis == Stats[0])
		{
			wis = Stats[0];
			Stats[0] = 0;
			valid = true;
			break;
		}
		if (wis == Stats[1])
		{
			wis = Stats[1];
			Stats[1] = 0;
			valid = true;
			break;
		}
		if (wis == Stats[2])
		{
			wis = Stats[2];
			Stats[2] = 0;
			valid = true;
			break;
		}
		if (wis == Stats[3])
		{
			wis = Stats[3];
			Stats[3] = 0;
			valid = true;
			break;
		}
		if (wis == Stats[4])
		{
			wis = Stats[4];
			Stats[4] = 0;
			valid = true;
			break;
		}
		if (wis == Stats[5])
		{
			wis = Stats[5];
			Stats[5] = 0;
			valid = true;
			break;
		}
	}
}

void assignCHA()
{
	bool valid = false;
	while (!valid)
	{
		displayStats();
		cout << "Charisma - ";
		cin >> cha;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (cha == Stats[0])
		{
			cha = Stats[0];
			Stats[0] = 0;
			valid = true;
			break;
		}
		if (cha == Stats[1])
		{
			cha = Stats[1];
			Stats[1] = 0;
			valid = true;
			break;
		}
		if (cha == Stats[2])
		{
			cha = Stats[2];
			Stats[2] = 0;
			valid = true;
			break;
		}
		if (cha == Stats[3])
		{
			cha = Stats[3];
			Stats[3] = 0;
			valid = true;
			break;
		}
		if (cha == Stats[4])
		{
			cha = Stats[4];
			Stats[4] = 0;
			valid = true;
			break;
		}
		if (cha == Stats[5])
		{
			cha = Stats[5];
			Stats[5] = 0;
			valid = true;
			break;
		}
	}
}