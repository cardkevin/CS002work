//File Name: Assignment2_Chapter2_question4
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Assignment Number: 3
//Description: This program reads in ten whole numbers and output the sum of the numbers which are positive
//              the sum of the numbers which are less than or equal to 0, and the sum off all the numbers.
//Last Changed: March 1,2019.

#include <iostream>

using namespace std;

int main()
{
    int times = 10, counter = 1, number, sumPTotal = 0, sumNTotal = 0, sumATotal = 0;
    while(times>0)
    {
        cout << "Enter number " << counter << endl;
        cin >> number;
        if(number>0)
        {
            sumPTotal+=number;
            sumATotal+=number;
        }
        if(number<=0)
        {
            sumNTotal+=number;
            sumATotal+=number;
        }
        times--;
        counter++;
    }
    cout << "The sum of all the numbers greater than zero is " << sumPTotal << endl;
    cout << "The sum of all the numbers less than or equal to zero is " << sumNTotal << endl;
    cout << "The sum of all the numbers is " << sumATotal << endl;
}

/*
 Enter number 1
 1000
 Enter number 2
 900
 Enter number 3
 -1000
 Enter number 4
 100
 Enter number 5
 -987
 Enter number 6
 789
 Enter number 7
 -567
 Enter number 8
 -567
 Enter number 9
 687
 Enter number 10
 87
 The sum of all the numbers greater than zero is 3563
 The sum of all the numbers less than or equal to zero is -3121
 The sum of all the numbers is 442
 Program ended with exit code: 0
*/
