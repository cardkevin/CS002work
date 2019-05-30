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
    int times = 10, counter = 1, number, sumPTotal = 0, sumNTotal = 0, sumATotal = 0, pCounter = 0, nCounter = 0, averageNegative = 0, averagePostive = 0, averageAll = 0;
    while(times>0)
    {
        cout << "Enter number " << counter << endl;
        cin >> number;
        if(number>0)
        {
            sumPTotal+=number;
            sumATotal+=number;
            pCounter++;
        }
        if(number<=0)
        {
            sumNTotal+=number;
            sumATotal+=number;
            nCounter++;
        }
        times--;
        counter++;
    }
    cout << "The sum of all the numbers greater than zero is " << sumPTotal << endl;
    averagePostive=sumPTotal/pCounter;
    cout << "The average of all the numbers greater than zero is " << averagePostive << endl;
    cout << "The sum of all the numbers less than or equal to zero is " << sumNTotal << endl;
    averageNegative=sumNTotal/nCounter;
    cout << "The average of the all the numbers less than or equal to zero is " << averageNegative << endl;
    cout << "The sum of all the numbers is " << sumATotal << endl;
    averageAll=sumATotal/10;
    cout << "The average of all the numbers is " << averageAll << endl;
}

/*
 Enter number 1
 100
 Enter number 2
 -900
 Enter number 3
 99
 Enter number 4
 -78
 Enter number 5
 78
 Enter number 6
 19
 Enter number 7
 90
 Enter number 8
 -90
 Enter number 9
 78
 Enter number 10
 -78
 The sum of all the numbers greater than zero is 464
 The average of all the numbers greater than zero is 77
 The sum of all the numbers less than or equal to zero is -1146
 The average of the all the numbers less than or equal to zero is -286
 The sum of all the numbers is -682
 The average of all the numbers is -68
 Program ended with exit code: 0
*/
