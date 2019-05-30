//File Name: Assignment2_Chapter2_question4
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Assignment Number:2
//Description: Calculate the face value required in order for the consumer to receive the amount needed.
//Last Changed: February 27,2019.

#include <iostream>
using namespace std;

int main()
{
    double rate, loanNeeded, months, loanWanted, makePercent = 100, makeMonths = 12;
    
    while(true)
    {
        cout << "How much do you need?" << endl;
        cin >> loanWanted;
        cout << "Enter the rate wanted: " << endl;
        cin >> rate;
        rate = rate/makePercent;
        cout << "Enter the loan length in months: " << endl;
        cin >> months;
        months = months/makeMonths;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        loanNeeded = loanWanted/(1-(months*rate));
        cout << "You need to take out a loan of " << loanNeeded << "." << endl;
        cout << "Enter Y exit the program or enter N to continue" << endl;
        char goON;
        cin >> goON;
        if(goON == 'Y' || goON == 'y')
        {
            return 0;
        }
    }
}
/*
How much do you need?
1000
Enter the rate wanted:
15
Enter the loan length in months:
18
You need to take out a loan of 1290.32.
Enter Y exit the program or enter N to continue
n
How much do you need?
775
Enter the rate wanted:
15
Enter the loan length in months:
18
You need to take out a loan of 1000.00.
Enter Y exit the program or enter N to continue
n
How much do you need?
1000
Enter the rate wanted:
15
Enter the loan length in months:
18
You need to take out a loan of 1290.32.
Enter Y exit the program or enter N to continue
*/
