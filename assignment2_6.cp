//File Name: Assignment2_Chapter2_question4
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Assignment Number:2
//Description: This program will read the number of hours worked, number of dependents and out the workers
//              gross pay with all the withholdings and the net takehome pay.
//Last Changed: February 27,2019.

#include <iostream>
using namespace std;

int main()
{
    double socialSecurity = .06, federalIncome = .14, stateIncome = .05, hourRate = 16.78, hoursWorked, salary, netSalary, feeFIC, feeSTC, feeSSC;
    int unionDues = 10, dependents, dependentTax = 35;
    
    while(true)
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "Enter the number of hours worked" << endl;
        cin >> hoursWorked;
        salary = hoursWorked*hourRate;
        cout << "Enter number of dependents: " << endl;
        cin >> dependents;
        if(dependents >= 3)
        {
            feeSSC = salary*socialSecurity;
            feeFIC = salary*federalIncome;
            feeSTC = salary*stateIncome;
            netSalary = salary-feeSTC-feeSSC-feeFIC-dependentTax-unionDues;
            cout << "Your Gross Pay is: $" << salary << endl;
            cout << "Your Federal Income Withholding is: $" << feeFIC << endl;
            cout << "Your Social Security Withholding is: $" << feeSSC << endl;
            cout << "Your State Income Withholding is: $" << feeSTC << endl;
            cout << "Your dependent Withholding is: $" << dependentTax << endl;
            cout << "Your netpay is: $" << netSalary << endl;
        }
        if(dependents < 3)
        {
            feeSSC = salary*socialSecurity;
            feeFIC = salary*federalIncome;
            feeSTC = salary*stateIncome;
            netSalary = salary-feeSTC-feeSSC-feeFIC-unionDues;
            cout << "Your Gross Pay is: $" << salary << endl;
            cout << "Your Federal Income Withholding is: $" << feeFIC << endl;
            cout << "Your Social Security Withholding is: $" << feeSSC << endl;
            cout << "Your State Income Withholding is: $" << feeSTC << endl;
            cout << "Your netpay is: $" << netSalary << endl;
        }
        cout << "Enter Y to exit or N to calculate another salary." << endl;
        char goON;
        cin >> goON;
        if(goON == 'Y' || goON == 'y')
        {
            return 0;
        }
    }
}
/*
 Enter the number of hours worked
 40
 Enter number of dependents:
 3
 Your Gross Pay is: $671.20
 Your Federal Income Withholding is: $93.97
 Your Social Security Withholding is: $40.27
 Your State Income Withholding is: $33.56
 Your dependent Withholding is: $35
 Your netpay is: $458.40
 Enter Y to exit or N to calculate another salary.
 n
 Enter the number of hours worked
 40
 Enter number of dependents:
 2
 Your Gross Pay is: $671.20
 Your Federal Income Withholding is: $93.97
 Your Social Security Withholding is: $40.27
 Your State Income Withholding is: $33.56
 Your netpay is: $493.40
 Enter Y to exit or N to calculate another salary.
 n
 Enter the number of hours worked
 35
 Enter number of dependents:
 0
 Your Gross Pay is: $587.30
 Your Federal Income Withholding is: $82.22
 Your Social Security Withholding is: $35.24
 Your State Income Withholding is: $29.37
 Your netpay is: $430.48
 Enter Y to exit or N to calculate another salary.
*/
