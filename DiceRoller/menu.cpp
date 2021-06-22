#include <iostream>

using namespace std;

void menuDiceRoller();
void statRoller();

void menu()
{
    string menuOptions = "1 - Dice Roller\n2 - Stat Roller\n3 - Exit\n";
    bool valid = true;
    int menuSelection{};
    while (valid)
    {
        cout << menuOptions;
        cin >> menuSelection;
        
        system("cls");

        if (!cin) // checks if the user input is a valid number
        {
            cin.clear(); // reset failbit

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
        }
        
        switch (menuSelection)
        {
        case 1:
            menuDiceRoller();
            break;
        case 2:
            statRoller();
            break;
        case 3:
            return;
            break;
        default:
            break;
        }

    }

}

int main()
{
    menu();
    return 0;
}