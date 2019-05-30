//File Name: assignment5_2.cpp
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Group Project
//Description: Approximate pi using a series for n term, n is given by the user.
//Last Changed: March 9,2019;

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double piResult;
    int numberForSeriesCalculation;
    char escape;
    
    while(true)
    {
        piResult = 0.00;
        cout << "Input a value to determine the number of terms in the approximation of the value of pi."
             << endl;
        cin >> numberForSeriesCalculation;
        numberForSeriesCalculation--;
        for(int seriesCounter = 0; seriesCounter <= numberForSeriesCalculation;seriesCounter++)
        {
            piResult += ((pow(-1,seriesCounter))/((2*seriesCounter)+1));
        }
        cout << piResult*4 << endl;
        cout << "Would you like to try another number. Y to continue or N to escape program" << endl;
        cin >> escape;
        if(escape == 'n' || escape == 'N')
        {
            return 0;
        }
    }
}
/*
 Input a value to determine the number of terms in the approximation of the value of pi.
 3
 3.46667
 Would you like to try another number. Y to continue or N to escape program
 y
 Input a value to determine the number of terms in the approximation of the value of pi.
 3
 3.46667
 Would you like to try another number. Y to continue or N to escape program
 y
 Input a value to determine the number of terms in the approximation of the value of pi.
 2
 2.66667
 Would you like to try another number. Y to continue or N to escape program
*/
