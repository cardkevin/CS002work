//File Name: Assignment5_Chapter3Q12
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Description: 23 against the machine. Choose a number between 1-3. The user that has to pick up the last stick loses.
//Last Changed: March 11, 2019;

#include <iostream>

using namespace std;

int main()
{
    char escape = 'y';
    int userInput, totalSticks;
    while(escape == 'y' || escape == 'Y')
    {
        totalSticks = 23;
        cout << "Hello user! Welcome to 23. The rules of the game are simple." << endl;
        cout << "Choose 1-3 sticks from the pile. The user that has to get" << endl;
        cout << "the last stick loses.\n" << endl;
        cout << "\nEnter a number between 1-3" << endl;
        cin >> userInput;
        while(totalSticks>1)
        {
            while(!(userInput==1||userInput==2||userInput==3))
            {
                cout << "Invalid entry please enter a number between 1-3." << endl;
                cin >> userInput;
            }
            totalSticks-=userInput;
            if(totalSticks > 4)
            {
                totalSticks= 4-userInput;
            }
            else if(totalSticks==4)
            {
                totalSticks-=3;
            }
            else if(totalSticks == 3)
            {
                totalSticks-=2;
            }
            else if(totalSticks == 2)
            {
                totalSticks -=1;
            }
            else if(totalSticks == 1)
            {
                cout << "The computer loses. You win!" << endl;
                totalSticks -=1;
            }
            if(totalSticks == 0)
            {
                cout << "Do you want to play again (Y/N)" << endl;
                cin >> escape;
                break;
            }
            if(totalSticks==1)
            {
                cout << "There is one stick left. You lose! The computer wins!" << endl;
                cout << "Do you want to play again (Y/N)" << endl;
                cin >> escape;
                break;
            }
            cout << "There are " << totalSticks << " left. Enter another number" << endl;
            cin >> userInput;
        }
        
    }
}
/*
 Hello user! Welcome to 23. The rules of the game are simple.
 Choose 1-3 sticks from the pile. The user that has to get
 the last stick loses.
 
 
 Enter a number between 1-3
 2
 There are 19 left. Enter another number
 3
 There are 13 left. Enter another number
 4
 Invalid entry please enter a number between 1-3.
 2
 There are 9 left. Enter another number
 3
 There are 3 left. Enter another number
 2
 The computer loses. You win!
 Do you want to play again (Y/N)
 y
 Hello user! Welcome to 23. The rules of the game are simple.
 Choose 1-3 sticks from the pile. The user that has to get
 the last stick loses.
 
 
 Enter a number between 1-3
 1
 There are 21 left. Enter another number
 3
 There are 15 left. Enter another number
 3
 There are 9 left. Enter another number
 3
 There are 3 left. Enter another number
 1
 There is one stick left. You lose! The computer wins!
 Do you want to play again (Y/N)
 y
 Hello user! Welcome to 23. The rules of the game are simple.
 Choose 1-3 sticks from the pile. The user that has to get
 the last stick loses.
 
 
 Enter a number between 1-3
 3
 There are 17 left. Enter another number
 3
 There are 11 left. Enter another number
 3
 There are 5 left. Enter another number
 3
 There is one stick left. You lose! The computer wins!
 Do you want to play again (Y/N)
 n
 Program ended with exit code: 0
 */
