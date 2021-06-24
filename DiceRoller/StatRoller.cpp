#include <iostream>;
#include <algorithm>


using namespace std;
void Menu();
void assignStats();
void displayStats();
void assignSTR();
void assignDEX();
void assignCON();
void assignINT();
void assignWIS();
void assignCHA();

int STAT[6];

int str1{ 0 }, dex1{ 0 }, con1{ 0 }, inti1 { 0 }, wis1{ 0 }, cha1{ 0 };

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
		
		STAT[rolledStat] = rollTotal[0] + rollTotal[1] + rollTotal[3];
		rolledStat++;
	}
	Menu();
}

void Menu()
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
			statRoller(); 
			validSelection = true;
			break;
		case 2:
			system("cls");
			validSelection = true;
			assignStats();
			break;
		default:
			system("cls");
			break;
		}
	}
}

void displayStats()
{
	std::sort(std::rbegin(STAT), std::rend(STAT));
	int i{ 0 };
	while (i < 6)
	{
		cout << STAT[i] << "\n";
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

	cout << "Str - " << str1 << "\nDex - " << dex1 << "\nCon - " << con1 << "\nInt - " << inti1 << "\nWis - " << wis1 << "\nCha - " << cha1 << "\n";
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
		cin >> str1;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (str1 == STAT[0])
		{
			str1 = STAT[0];
			STAT[0] = 0;
			valid = true;
			break;
		}
		if (str1 == STAT[1])
		{
			str1 = STAT[1];
			STAT[1] = 0;
			valid = true;
			break;
		}
		if (str1 == STAT[2])
		{
			str1 = STAT[2];
			STAT[2] = 0;
			valid = true;
			break;
		}
		if (str1 == STAT[3])
		{
			str1 = STAT[3];
			STAT[3] = 0;
			valid = true;
			break;
		}
		if (str1 == STAT[4])
		{
			str1 = STAT[4];
			STAT[4] = 0;
			valid = true;
			break;
		}
		if (str1 == STAT[5])
		{
			str1 = STAT[5];
			STAT[5] = 0;
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
		cin >> dex1;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (dex1 == STAT[0])
		{
			dex1 = STAT[0];
			STAT[0] = 0;
			valid = true;
			break;
		}
		if (dex1 == STAT[1])
		{
			dex1 = STAT[1];
			STAT[1] = 0;
			valid = true;
			break;
		}
		if (dex1 == STAT[2])
		{
			dex1 = STAT[2];
			STAT[2] = 0;
			valid = true;
			break;
		}
		if (dex1 == STAT[3])
		{
			dex1 = STAT[3];
			STAT[3] = 0;
			valid = true;
			break;
		}
		if (dex1 == STAT[4])
		{
			dex1 = STAT[4];
			STAT[4] = 0;
			valid = true;
			break;
		}
		if (dex1 == STAT[5])
		{
			dex1 = STAT[5];
			STAT[5] = 0;
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
		cin >> con1;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (con1 == STAT[0])
		{
			con1 = STAT[0];
			STAT[0] = 0;
			valid = true;
			break;
		}
		if (con1 == STAT[1])
		{
			con1 = STAT[1];
			STAT[1] = 0;
			valid = true;
			break;
		}
		if (con1 == STAT[2])
		{
			con1 = STAT[2];
			STAT[2] = 0;
			valid = true;
			break;
		}
		if (con1 == STAT[3])
		{
			con1 = STAT[3];
			STAT[3] = 0;
			valid = true;
			break;
		}
		if (con1 == STAT[4])
		{
			con1 = STAT[4];
			STAT[4] = 0;
			valid = true;
			break;
		}
		if (con1 == STAT[5])
		{
			con1 = STAT[5];
			STAT[5] = 0;
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
		cin >> inti1;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (inti1 == STAT[0])
		{
			inti1 = STAT[0];
			STAT[0] = 0;
			valid = true;
			break;
		}
		if (inti1 == STAT[1])
		{
			inti1 = STAT[1];
			STAT[1] = 0;
			valid = true;
			break;
		}
		if (inti1 == STAT[2])
		{
			inti1 = STAT[2];
			STAT[2] = 0;
			valid = true;
			break;
		}
		if (inti1 == STAT[3])
		{
			inti1 = STAT[3];
			STAT[3] = 0;
			valid = true;
			break;
		}
		if (inti1 == STAT[4])
		{
			inti1 = STAT[4];
			STAT[4] = 0;
			valid = true;
			break;
		}
		if (inti1 == STAT[5])
		{
			inti1 = STAT[5];
			STAT[5] = 0;
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
		cin >> wis1;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (wis1 == STAT[0])
		{
			wis1 = STAT[0];
			STAT[0] = 0;
			valid = true;
			break;
		}
		if (wis1 == STAT[1])
		{
			wis1 = STAT[1];
			STAT[1] = 0;
			valid = true;
			break;
		}
		if (wis1 == STAT[2])
		{
			wis1 = STAT[2];
			STAT[2] = 0;
			valid = true;
			break;
		}
		if (wis1 == STAT[3])
		{
			wis1 = STAT[3];
			STAT[3] = 0;
			valid = true;
			break;
		}
		if (wis1 == STAT[4])
		{
			wis1 = STAT[4];
			STAT[4] = 0;
			valid = true;
			break;
		}
		if (wis1 == STAT[5])
		{
			wis1 = STAT[5];
			STAT[5] = 0;
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
		cin >> cha1;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (cha1 == STAT[0])
		{
			cha1 = STAT[0];
			STAT[0] = 0;
			valid = true;
			break;
		}
		if (cha1 == STAT[1])
		{
			cha1 = STAT[1];
			STAT[1] = 0;
			valid = true;
			break;
		}
		if (cha1 == STAT[2])
		{
			cha1 = STAT[2];
			STAT[2] = 0;
			valid = true;
			break;
		}
		if (cha1 == STAT[3])
		{
			cha1 = STAT[3];
			STAT[3] = 0;
			valid = true;
			break;
		}
		if (cha1 == STAT[4])
		{
			cha1 = STAT[4];
			STAT[4] = 0;
			valid = true;
			break;
		}
		if (cha1 == STAT[5])
		{
			cha1 = STAT[5];
			STAT[5] = 0;
			valid = true;
			break;
		}
	}
}