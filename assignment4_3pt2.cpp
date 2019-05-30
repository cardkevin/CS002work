//File Name: assignment4_3pt2.cpp
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Assignment Number 4_3 part 2
//Description: Check when celsius and farheinheit have the same value for temperature.
//Last Changed: March 6,2019.

#include <iostream>

using namespace std;



int main()
{
    char escape;
    int farhenheit = 212, celsiusCounter;
    const int NINE = 9, FIVE = 5, THIRTY_TWO = 32;
    for (celsiusCounter=100; farhenheit >= celsiusCounter; --celsiusCounter)
    {
        farhenheit = (NINE*celsiusCounter)/FIVE+THIRTY_TWO;
        cout << "Farhenheit: " << farhenheit << " Celsius: " << celsiusCounter << " ";
        if(farhenheit == celsiusCounter)
        {
            cout << "Fahreneit is equal to celsius at " << farhenheit << " degrees" << endl;
            // break ends the current loop that its in.
            break;
        }
    }
    // I don't know why the user would want to repeat this but here is the code for that.
    cout << "Do you want to continue? (Y/N)" << endl;
    cin >> escape;
    if(escape == 'n' || escape == 'N')
    {
        // This ends the program
        return 0;
    }
}

/*
 Farhenheit: 212 Celsius: 100 Farhenheit: 210 Celsius: 99 Farhenheit: 208 Celsius: 98 Farhenheit: 206 Celsius: 97 Farhenheit: 204 Celsius: 96 Farhenheit: 203 Celsius: 95 Farhenheit: 201 Celsius: 94 Farhenheit: 199 Celsius: 93 Farhenheit: 197 Celsius: 92 Farhenheit: 195 Celsius: 91 Farhenheit: 194 Celsius: 90 Farhenheit: 192 Celsius: 89 Farhenheit: 190 Celsius: 88 Farhenheit: 188 Celsius: 87 Farhenheit: 186 Celsius: 86 Farhenheit: 185 Celsius: 85 Farhenheit: 183 Celsius: 84 Farhenheit: 181 Celsius: 83 Farhenheit: 179 Celsius: 82 Farhenheit: 177 Celsius: 81 Farhenheit: 176 Celsius: 80 Farhenheit: 174 Celsius: 79 Farhenheit: 172 Celsius: 78 Farhenheit: 170 Celsius: 77 Farhenheit: 168 Celsius: 76 Farhenheit: 167 Celsius: 75 Farhenheit: 165 Celsius: 74 Farhenheit: 163 Celsius: 73 Farhenheit: 161 Celsius: 72 Farhenheit: 159 Celsius: 71 Farhenheit: 158 Celsius: 70 Farhenheit: 156 Celsius: 69 Farhenheit: 154 Celsius: 68 Farhenheit: 152 Celsius: 67 Farhenheit: 150 Celsius: 66 Farhenheit: 149 Celsius: 65 Farhenheit: 147 Celsius: 64 Farhenheit: 145 Celsius: 63 Farhenheit: 143 Celsius: 62 Farhenheit: 141 Celsius: 61 Farhenheit: 140 Celsius: 60 Farhenheit: 138 Celsius: 59 Farhenheit: 136 Celsius: 58 Farhenheit: 134 Celsius: 57 Farhenheit: 132 Celsius: 56 Farhenheit: 131 Celsius: 55 Farhenheit: 129 Celsius: 54 Farhenheit: 127 Celsius: 53 Farhenheit: 125 Celsius: 52 Farhenheit: 123 Celsius: 51 Farhenheit: 122 Celsius: 50 Farhenheit: 120 Celsius: 49 Farhenheit: 118 Celsius: 48 Farhenheit: 116 Celsius: 47 Farhenheit: 114 Celsius: 46 Farhenheit: 113 Celsius: 45 Farhenheit: 111 Celsius: 44 Farhenheit: 109 Celsius: 43 Farhenheit: 107 Celsius: 42 Farhenheit: 105 Celsius: 41 Farhenheit: 104 Celsius: 40 Farhenheit: 102 Celsius: 39 Farhenheit: 100 Celsius: 38 Farhenheit: 98 Celsius: 37 Farhenheit: 96 Celsius: 36 Farhenheit: 95 Celsius: 35 Farhenheit: 93 Celsius: 34 Farhenheit: 91 Celsius: 33 Farhenheit: 89 Celsius: 32 Farhenheit: 87 Celsius: 31 Farhenheit: 86 Celsius: 30 Farhenheit: 84 Celsius: 29 Farhenheit: 82 Celsius: 28 Farhenheit: 80 Celsius: 27 Farhenheit: 78 Celsius: 26 Farhenheit: 77 Celsius: 25 Farhenheit: 75 Celsius: 24 Farhenheit: 73 Celsius: 23 Farhenheit: 71 Celsius: 22 Farhenheit: 69 Celsius: 21 Farhenheit: 68 Celsius: 20 Farhenheit: 66 Celsius: 19 Farhenheit: 64 Celsius: 18 Farhenheit: 62 Celsius: 17 Farhenheit: 60 Celsius: 16 Farhenheit: 59 Celsius: 15 Farhenheit: 57 Celsius: 14 Farhenheit: 55 Celsius: 13 Farhenheit: 53 Celsius: 12 Farhenheit: 51 Celsius: 11 Farhenheit: 50 Celsius: 10 Farhenheit: 48 Celsius: 9 Farhenheit: 46 Celsius: 8 Farhenheit: 44 Celsius: 7 Farhenheit: 42 Celsius: 6 Farhenheit: 41 Celsius: 5 Farhenheit: 39 Celsius: 4 Farhenheit: 37 Celsius: 3 Farhenheit: 35 Celsius: 2 Farhenheit: 33 Celsius: 1 Farhenheit: 32 Celsius: 0 Farhenheit: 31 Celsius: -1 Farhenheit: 29 Celsius: -2 Farhenheit: 27 Celsius: -3 Farhenheit: 25 Celsius: -4 Farhenheit: 23 Celsius: -5 Farhenheit: 22 Celsius: -6 Farhenheit: 20 Celsius: -7 Farhenheit: 18 Celsius: -8 Farhenheit: 16 Celsius: -9 Farhenheit: 14 Celsius: -10 Farhenheit: 13 Celsius: -11 Farhenheit: 11 Celsius: -12 Farhenheit: 9 Celsius: -13 Farhenheit: 7 Celsius: -14 Farhenheit: 5 Celsius: -15 Farhenheit: 4 Celsius: -16 Farhenheit: 2 Celsius: -17 Farhenheit: 0 Celsius: -18 Farhenheit: -2 Celsius: -19 Farhenheit: -4 Celsius: -20 Farhenheit: -5 Celsius: -21 Farhenheit: -7 Celsius: -22 Farhenheit: -9 Celsius: -23 Farhenheit: -11 Celsius: -24 Farhenheit: -13 Celsius: -25 Farhenheit: -14 Celsius: -26 Farhenheit: -16 Celsius: -27 Farhenheit: -18 Celsius: -28 Farhenheit: -20 Celsius: -29 Farhenheit: -22 Celsius: -30 Farhenheit: -23 Celsius: -31 Farhenheit: -25 Celsius: -32 Farhenheit: -27 Celsius: -33 Farhenheit: -29 Celsius: -34 Farhenheit: -31 Celsius: -35 Farhenheit: -32 Celsius: -36 Farhenheit: -34 Celsius: -37 Farhenheit: -36 Celsius: -38 Farhenheit: -38 Celsius: -39 Farhenheit: -40 Celsius: -40 Fahreneit is equal to celsius at -40 degrees
 Do you want to continue? (Y/N)

*/
