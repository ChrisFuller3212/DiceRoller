//
//  main.cpp
//  DiceRoller
//
//  Created by Christian Fuller on 10/23/22.
//

#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int die1,die2,total;
    string conversionsMenu;
    string askAgain;
    bool isValid = false;
    
    cout << "Dice Roller\n\n";
    cout << "Roll Dice? (y/n): ";
    cin >> conversionsMenu;
    do {
        if (conversionsMenu == "y"){
            isValid = true;
            die1 = rand() % 6 + 1;
            die2 = rand() % 6 + 1;
            total = die1 + die2;
            cout << "\n Die 1: " << die1;
            cout << "\n Die 2: " << die2;
            cout << "\n Total: " << total;
            if (total == 12){
                cout << "\n Boxcars!";
            } else if (total == 2){
                cout << "\n Snakeeyes!";
            }
            cout << "\n\nContinue? (y/n): ";
            cin >> askAgain;
        } if (askAgain == "y"){
            isValid = false;
            continue;
        } else if (askAgain == "n"){
            isValid = true;
            cout << "\nThanks, bye!\n\n";
        }
    } while (!(isValid));

        return 0;
    }
