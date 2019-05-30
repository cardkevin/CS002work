//File Name: assignment11_3_1.cpp
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Description: Test a function using a driver function. The function should output the standard deviation.
//Last Changed: March 27,2019

#include <iostream>

void upperLower(int& actual, int lowerLimit, int upperLimit);
//Precondition
//Postcondition

void introduction();


int input(int& hours, int& mins, char& amPM);
//Precondition
//Postcondition

int conversion(int& timeConversion, char& amPM);
//Precondition
//Postcondition

void output(int& twelveHour, int& mins, int& twentyFourHour, char& amPM);
//Precondition
//Postcondition

void upperLower(char& actual, char validOptionOne, char validOptionTwo, char validOptionThree, char validOptionFour);


int main()
{ using namespace std;
    char escape = 'y';
    while(escape=='y'||escape=='Y')
    {
        int userHours, minutes, hourConversion;
        char amOrPm = 'a';
        introduction();
        hourConversion = input(userHours, minutes, amOrPm);
        output(hourConversion, minutes, userHours, amOrPm);
        cin >> escape;
        upperLower(escape, 'y', 'Y', 'n', 'N');
    }
    cout << "Goodbye";
    return 0;
}

//


//
int input(int& hours, int& mins, char& amPM)
{ using namespace std;
    int hour, minutes;
    
    cout << "Enter a time for hours in 24 hour format. ";
    cin >> hour;
    upperLower(hour, 0, 23);
    hours = hour;
    cout << "Enter a time for minutes. ";
    cin >> minutes;
    upperLower(minutes, 0, 59);
    mins = minutes;
    return conversion(hour, amPM);
}

void introduction()
{ using namespace std;
    cout << "Hello! This program will take in a time in a 24 hour time format and convert it\n";
    cout << "to 12 hour time format." << endl;
}

int conversion(int& timeConversion, char& amPM)
{
    if(timeConversion>12)
    {
        timeConversion = timeConversion - 12;
        amPM = 'p';
    }
    else if(timeConversion==12)
    {
        amPM = 'p';
    }
    else if(timeConversion==0)
    {
        timeConversion = 12;
    }
    return timeConversion;
}

void output(int& twelveHour, int& mins, int& twentyFourHour, char& amPM)
{ using namespace std;
    if(twelveHour>12&&(amPM=='p'||amPM=='P')&&mins<10)
    {
        cout << "The time " << twentyFourHour << ":" << mins << " would be\n";
        cout << twelveHour << ":" << mins << " PM in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
    else if(twelveHour>12&&(amPM=='p'||amPM=='P'))
    {
        cout << "The time " << twentyFourHour << ":" << "0" << mins << " would be\n";
        cout << twelveHour << ":" << mins << " PM in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
    else if(twentyFourHour==0&&mins<10)
    {
        cout << "The time " << twentyFourHour << ":" << "0" << mins << " AM would be\n";
        cout << twelveHour << ":" << "0" << mins << " AM in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
    else if(twentyFourHour==0)
    {
        cout << "Your time " << twelveHour << ":" << mins << " AM would be the same in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
    else if((amPM=='p'||amPM=='P')&&mins<10)
    {
        cout << "Your time " << twelveHour << ":" << "0" << mins << " PM would be the same in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
    else if(amPM=='p'||amPM=='P')
    {
        cout << "Your time " << twelveHour << ":" << mins << " PM would be the same in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
    else if((amPM=='a'||amPM=='a')&&mins<10)
    {
        cout << "Your time " << twelveHour << ":" << "0" << mins << " AM would be the same in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
    else
    {
        cout << "Your time " << twelveHour << ":" << mins << " AM would be the same in 12 hour notation." << endl;
        cout << "Would you like to run the program again? (Y/N)" << endl;
    }
}

void upperLower(int& actual, int lowerLimit, int upperLimit)
{ using namespace std;
    while(!(actual>=lowerLimit&&actual<=upperLimit))
    {
        cout << "Enter an appropriate number" << endl;
        cin >> actual;
    }
}

void upperLower(char& actual, char validOptionOne, char validOptionTwo, char validOptionThree, char validOptionFour)
{ using namespace std;
    while(!(actual==validOptionOne||actual==validOptionTwo||actual==validOptionThree||actual==validOptionFour))
    {
        cout << "Enter an appropriate option" << endl;
        cin >> actual;
    }
}

/*
 Hello! This program will take in a time in a 24 hour time format and convert it
 to 12 hour time format.
 Enter a time for hours in 24 hour format. 0
 Enter a time for minutes. 0
 The time 0:00 AM would be
 12:00 AM in 12 hour notation.
 Would you like to run the program again? (Y/N)
 y
 Hello! This program will take in a time in a 24 hour time format and convert it
 to 12 hour time format.
 Enter a time for hours in 24 hour format. 0
 Enter a time for minutes. 11
 Your time 12:11 AM would be the same in 12 hour notation.
 Would you like to run the program again? (Y/N)
 y
 Hello! This program will take in a time in a 24 hour time format and convert it
 to 12 hour time format.
 Enter a time for hours in 24 hour format. 1
 Enter a time for minutes. 1
 Your time 1:01 AM would be the same in 12 hour notation.
 Would you like to run the program again? (Y/N)
 y
 Hello! This program will take in a time in a 24 hour time format and convert it
 to 12 hour time format.
 Enter a time for hours in 24 hour format. 12
 Enter a time for minutes. 1
 Your time 12:01 PM would be the same in 12 hour notation.
 Would you like to run the program again? (Y/N)
 y
 Hello! This program will take in a time in a 24 hour time format and convert it
 to 12 hour time format.
 Enter a time for hours in 24 hour format. 23
 Enter a time for minutes. 1
 Your time 11:01 PM would be the same in 12 hour notation.
 Would you like to run the program again? (Y/N)

 */
