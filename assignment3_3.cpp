//File Name: Assignment3_Chapter2_question11
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Assignment Number: 3
//Description: This program reads two inputs the starting and ending celcius and outputs the result the calculation of the velocity of sound
//Last Changed: March 1,2019.

#include <iostream>

using namespace std;

int main()
{
    int startPoint, endPoint, counter;
    double velocity = 331.3, temp = .61, actualV;
    cout << "Enter a starting and ending point for the temperature: " << endl;
    cin >> startPoint, endPoint;
    counter = startPoint;
    endPoint++;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    while(counter<=endPoint)
    {
        actualV=velocity+(counter*temp);
        cout << "At " << counter << " degrees Celsius the velocity of sound is " << actualV << " m/s" << endl;
        counter++;
    }
}
/*
Enter a starting and ending point for the temperature:
0 2
At 0 degrees Celsius the velocity of sound is 331.3 m/s
At 1 degrees Celsius the velocity of sound is 331.9 m/s
At 2 degrees Celsius the velocity of sound is 332.5 m/s
Program ended with exit code: 0
*/
