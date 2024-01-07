#include <iostream>

using namespace std;

bool isNumber(string s) {
        for (int i = 0; i < s.length(); i++)
            if (isdigit(s[i]) == false)
                return false;
    
        return true;
    } 

int main(){

    //Variables
    int computer = 0;
    int user = 0;
    string weapon;
    string answer;
    string variables[3] = {"Rock", "Paper", "Scissor"};

    //Game initialisation
    while (true)
    {
        cout << "Welcome to Rock Paper Scissors type 'S' to play or 'Q' to exit: ";
        cin >> answer;

        if(answer == "S" or answer == "Start"){
            break;
        } else if (answer == "Q" or answer == "Quit") {
            exit(0);
        } else {
            continue;
        }
    }
    
    while (true)
    {
        cout << "1- Rock, 2- Paper, 3- Scissors Please type your weapon only by the number: ";
        cin >> weapon;

        if (isNumber(weapon)) {
            int intweapon = stoi(weapon);
            if (1 <= intweapon and intweapon <= 3) {
                 cout << "Your weapon is: " << variables[intweapon - 1] << endl;
                        break;
            }else {
                cout << "Please only select numbers between 1 to 3." << endl;
                continue;
            }
        } else {
            cout << "Please only select numbers between 1 to 3." << endl;
            continue;
        }
    }

    return 0;
}