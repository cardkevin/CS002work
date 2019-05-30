//
//  main.cpp
//  assignment24ch8_3
//
//  Created by Kevin Gonzalez on 5/23/19.
//  Copyright © 2019 Kevin Gonzalez. All rights reserved.
//  Description: Get the first and last initial from the users first names and last name.

#include <iostream>
#include <cstring>

using namespace std;

//Precondition: none
//Postcondition: retrieve user input and add counter to activate the getline
void usrInput(char var[], int& counter);

//Precondition: input a space string to find the position for the space
//Postcondition: return the first initial and last initial
void opFnLnIn(char var[]);

int main()
{
    using namespace std;
    char usrIn[80], bye = 'y';
    int counter = 0; // this is to activate the .ignore to clear the previous name.
    do
    {
        usrInput(usrIn, counter);
        opFnLnIn(usrIn);
        do
        {
            cout << "Try again?(y/n)" << endl;
            cin >> bye;
        }while(!(bye=='y'||bye=='Y'||bye=='n'||bye=='N')); // make sure the user only inputs a Y or N char
    }while(bye=='y'||bye=='Y'); // if y continue, n exit program
    return 0;
}

//grab text from user
void usrInput(char var[], int& counter)
{
    using namespace std;

    cout << "howdy" << endl;
    if(counter>0)
    {
        cin.ignore(80,'\n');
    }
    cin.getline(var, 80);
    counter++;
}

//find position and output initials
void opFnLnIn(char var[])
{
    using namespace std;
    int size = (int)strlen(var), pos = 0;
    for (int index = 0; index < size; index++)
    {
        if(var[index] == ' ')
        {
            pos = index;
        }
    }
    cout << var[0] << var[pos+1] << endl;
}

/*
 howdy
 Kevin gonzalez
 Kg
 Try again?(y/n)
 y
 howdy
 Gucci Mane
 GM
 Try again?(y/n)
 n
 Program ended with exit code: 0
 */

// 👾THIS PROGRAM IS USING STRING OBJECTS ONLY.. NOT C-STRING... THANKS FOR REVIEWING IT👾
/*
#include <iostream>
#include <string>

using namespace std;

//Precondition: none
//Postcondition: retrieve user input and add counter to activate the getline
void textFrmUsr(string& usrIn, int& counter);

//Precondition: input a space string to find the position for the space
//Postcondition: return the first initial and last initial
void fAndLInitial(string userS, string whereIsSpace);

int main()
{
    string fnLnInput;
    int firstRun = 0; // this is to activate the .ignore to clear the previous name.
    char esc = 'y';
    do
    {
        textFrmUsr(fnLnInput, firstRun);
        fAndLInitial(fnLnInput, " ");
        do
        {
            cout << "Would you like to enter another name?(Y/N)" << endl;
            cin >> esc;
        }while (!(esc == 'Y'||esc == 'y'||esc == 'n'||esc == 'N')); // make sure the user only inputs a Y or N char
    }while(esc == 'Y'||esc == 'y'); // if y continue, n exit program
    return 0;
}

//grab text from user
void textFrmUsr(string& usrIn, int& counter)
{
    cout << "Enter first name and last name!" << endl;
    if(counter>0)
    {
        cin.ignore(80,'\n');
    }
    getline(cin, usrIn);
    counter++;
}

//find position and output initials
void fAndLInitial(string userS, string whereIsSpace)
{
    int pos;
    pos = (int)userS.find(whereIsSpace);
    cout << userS[0] << userS[pos+1] <<  endl;
}


 Enter first name and last name!
 Kevin Gonz
 KG
 Would you like to enter another name?(Y/N)
 y
 Enter first name and last name!
 Nivek Zelaznog
 NZ
 Would you like to enter another name?(Y/N)
 n
 Program ended with exit code: 0
 */
