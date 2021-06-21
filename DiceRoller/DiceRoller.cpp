#include <iostream>

using namespace std; //let us use cout, string ect without std::

void roll(int dice, int rollNo)
{
    int currentRoll{ 0 }, currentNo{ }, runningTotal{};

    while (currentRoll < rollNo)
    {
        currentNo = rand() % dice + 1;
        runningTotal = runningTotal + currentNo;
        cout << "Roll " << currentRoll +1 << " - " << currentNo << "\n";
        currentRoll++;
    }
    cout << "Total = " << runningTotal << "\n";
    system("pause");
    system("cls");
}

void numberOfRolls(int dice)
{
    int rollNo{};
    cout << "How many D" << dice << " do you want to roll? Enter 0 to return to the menu.\n";
    cin >> rollNo;

    switch (rollNo)
    {
    case 0:
        break;
    default:
        system("cls");
        roll(dice, rollNo);
        break;
    }
}

void selected(int selection)
{
    string invalid = "Invalid selection, Please try again.\n";
    int dice{};
    switch (selection)
    {
    case 1:
        dice = 4;
        numberOfRolls(dice);
        break;
    case 2:
        dice = 6;
        numberOfRolls(dice);
        break;
    case 3:
        dice = 8;
        numberOfRolls(dice);
        break;
    case 4:
        dice = 10;
        numberOfRolls(dice);
        break;
    case 5:
        dice = 12;
        numberOfRolls(dice);
        break;
    case 6:
        dice = 20;
        numberOfRolls(dice);
        break;
    case 7:
        dice = 100;
        numberOfRolls(dice);        
        break;
    case 0:
    default:
        system("cls");
        cout << invalid;
        break;
    }
}

void menu()
{
    bool valid = true;
    string menuOptions = "1 - D4\n2 - D6\n3 - D8\n4 - D10\n5 - D12\n6 - D20\n7 - D100\n8 - Exit\n";
    int selection{};

    while (valid == true) //while to keep returning to the menu without the app closing
    {
        cout << menuOptions;
        cin >> selection;
        
        //checks the users input was a number
        if (!cin) // or if(cin.fail())
        {
            cin.clear(); // reset failbit

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
        }

        if (selection == 8)
        {
            return;
        }
        system("cls");
        selected(selection);
    }
}

int main()
{
    menu();
    return 0;

}