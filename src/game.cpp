#include <iostream>
#include <stdlib.h>

using namespace std;

bool isNumber(string s) {
        for (int i = 0; i < s.length(); i++)
            if (isdigit(s[i]) == false)
                return false;
    
        return true;
    } 

int main(){

    //Variables
    int computer_point = 0;
    int user_point = 0;
    std::string weapon;
    std::string answer;
    string variables[3] = {"Rock", "Paper", "Scissor"};

    //Game initialisation
    while (true)
    {

        while (true)
        {
            std::cout << "Welcome to Rock Paper Scissors type 's' to play or 'q' to exit: ";
            

            if (std::getline(std::cin, answer)){
                if(answer.empty())
                {
                    std::cout << "Please enter 's' or 'q'." << std::endl;
                    
                }

                else if(answer == "s" or answer == "Start"){
                    break;

                } else if (answer == "q" or answer == "Quit") {
                    std::cout << "Goodbye." << std::endl;
                    exit(0);
                }
            }
            
            
        }
        
        while (true)
        {
            std::cout << "1- Rock, 2- Paper, 3- Scissors Please type your weapon only by the number: ";

            if (std::getline(std::cin, weapon)) {

                if (weapon.empty())
                {
                    std::cout << "Please only select numbers between 1 to 3." << std::endl;
                }

                else if (isNumber(weapon)) {
                    int intweapon = stoi(weapon);
                    if (1 <= intweapon and intweapon <= 3) {

                        int computer = rand() % 3 + 1;

                        if ((variables[intweapon - 1] == "Rock" and variables[computer - 1] == "Scissor") or (variables[intweapon - 1] == "Scissor" and variables[computer - 1] == "Paper") or (variables[intweapon - 1] == "Paper" and variables[computer - 1] == "Rock"))
                        {   
                            user_point += 1;
                            cout << "-*******************-\n* You win!          *\n* Your point: " << user_point << "     *" << endl;
                            cout << "* Computer point: " << computer_point << " *" << endl;
                            cout << "-*******************-\n" << endl;

                            cout << "Computer has chosen: " << variables[computer - 1] << "\n" << endl;
                            cout << "You have chosen: " << variables[intweapon - 1] << "\n" << endl;

                            if (user_point >= 3) {
                                cout << "-----------------------" << endl;
                                cout << "You have won the game :)" << endl;
                                cout << "-----------------------\n" << endl;
                                computer_point = 0;
                                user_point = 0;
                                break;
                            }

                        } else if ((variables[computer - 1] == "Rock" and variables[intweapon - 1] == "Scissor") or (variables[computer - 1] == "Scissor" and variables[intweapon - 1] == "Paper") or (variables[computer - 1] == "Paper" and variables[intweapon - 1] == "Rock")) {

                            computer_point += 1;
                            cout << "-*******************-\n* Computer wins :(  *\n* Your point: " << user_point << "     *" << endl;
                            cout << "* Computer point: " << computer_point << " *" << endl;
                            cout << "-*******************-\n" << endl;

                            cout << "Computer has chosen: " << variables[computer - 1] << "\n" << endl;
                            cout << "You have chosen: " << variables[intweapon - 1] << "\n" << endl;

                            if (computer_point >= 3) {
                                cout << "-----------------------" << endl;
                                cout << "Computer won the game :(" << endl;
                                cout << "-----------------------\n" << endl;
                                computer_point = 0;
                                user_point = 0;
                                break;
                            }

                        } else {
                            cout << "-*******************-\n* It is a tie!      *\n* Your point: " << user_point << "     *" << endl;
                            cout << "* Computer point: " << computer_point << " *" << endl;
                            cout << "-*******************-\n" << endl;

                            cout << "Computer has chosen: " << variables[computer - 1] << "\n" << endl;
                            cout << "You have chosen: " << variables[intweapon - 1] << "\n" << endl;
                        }
                    
                    } else {
                        cout << "Please only select numbers between 1 to 3." << endl;
                        continue;
                    }

                } else {
                    cout << "Please only select numbers between 1 to 3." << endl;
                    continue;
                }
        }
    }
}
    return 0;
}