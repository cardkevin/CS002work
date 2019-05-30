//File Name: Assignment5_Chapter3Q13
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Description: This program helps Batman find the riddler based the hints.
//Last Changed: March 11, 2019;

#include <iostream>

using namespace std;

int main()
{
    char escape = 'y';
    int newKey, ones, tens, hundreds, thousands;
    while(escape == 'y' || escape == 'Y')
    {
        cout << "Riddlers clues say the all four digits of the number are different." << endl;
        cout << "The digit in the thousand place is three times the digit in the tens place." << endl;
        cout << "The number is odd and the sum of the digits is 27." << endl;
        // Based on the conditions you could have key start at 9000. First, there is no other number's sum that is 3 times the thousands that will come out to 27. 2*3 is 6. 6+2 is 8 the max result of the sum between the hundreds and ones is 17. With 8 and 17 the sum is 25 which is less than 27.
        for(int key = 1; key <= 9999; key++)
        {
            newKey = key;
            ones = newKey%10;
            newKey/=10;
            tens = newKey%10;
            newKey/=10;
            hundreds = newKey%10;
            newKey/=10;
            thousands = newKey%10;
            // This checks the number to see if the number meets the address conditions.
            if((ones+tens+hundreds+thousands==27)&&(key%2!=0)&&(thousands==3*tens)&&(ones!=tens && ones!=hundreds && ones!=thousands && tens!=hundreds && tens!=thousands && hundreds!=thousands))
            {
                cout << "Riddlers address is " << key << endl;
                cout << "Would you like to do this again? (Y/N)" << endl;
                cin >> escape;
                break;
            }
        }
    }
}
/*
 Riddlers clues say the all four digits of the number are different.
 The digit in the thousand place is three times the digit in the tens place.
 The number is odd and the sum of the digits is 27.
 Riddlers address is 9837
 Would you like to do this again? (Y/N)
 y
 Riddlers clues say the all four digits of the number are different.
 The digit in the thousand place is three times the digit in the tens place.
 The number is odd and the sum of the digits is 27.
 Riddlers address is 9837
 Would you like to do this again? (Y/N)
 n
 Program ended with exit code: 0
 */
