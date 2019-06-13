/*
	Description: Write a program that takes in a number of dimes, quarters, nickels and then output the monetary value of the coins in cents.
	Author: Kevin Gonzalez
	Date: 6/13/2019 

*/

#include <iostream>

// Precondition: none
// Postcondition: This function will output text to the user as well as take input from the user. The function will repeat as many times as the
//				  user wishes.
void outputToUser();

// Precondition: arg1 is the answer from the user
//				 arg2 is the value you wish to be greater than the users input.(or greater than or equal to the users input)
//				 arg3 if true is passed the function will use greater than or equal to
//					  if false is passed the function will use greater than.
// Postcondition: This function will return values greater than arg2
void upperLowerLimit(int& arg1, int arg2, bool arg3);

// Precondition: nickels is the number of nickels
//				 dimes is the number of dimes
//				 quarters is the number of quarters
// Postcondition: This function will return the coin total as a double
double coinTotal(int nickels, int dimes, int quarters);

// Precondition: pass in the total coin value as a double.
// Postcondition: returns the dollar value.
int dollars(double coinT);

using namespace std;

int main()
{
	outputToUser();
	return 0;
}

// Precondition: none
// Postcondition: This function will output text to the user as well as take input from the user. The function will repeat as many times as the
//				  user wishes.
void outputToUser()
{
	int nickels, dimes, quarters;
	char repeat = 'Y';
	while(repeat == 'Y'||repeat == 'y')
	{
		cout << "Enter the number of nickels: ";
		cin >> nickels;
		upperLowerLimit(nickels, 0, true);
		cout << "Enter the number of dimes: ";
		cin >> dimes;
		upperLowerLimit(dimes, 0, true);
		cout << "Enter the number of quarters: ";
		cin >> quarters;
		upperLowerLimit(quarters, 0, true);
		cout << "Your total coin value is " << dollars(coinTotal(nickels, dimes, quarters)) 
			 << " dollars and " << (coinTotal(nickels,dimes,quarters) - dollars(coinTotal(nickels, dimes, quarters))) * 100 
			 << " cents." << endl;
		cout << "Would you like to enter new values?(y/n)" << endl;
		cin >> repeat;
		while(!(repeat == 'Y'||repeat == 'y'||repeat == 'n'||repeat == 'N'))
		{
			cout << "Would you like to enter new values?(y/n)" << endl;
			cin >> repeat;
		}
	}
	cout << "This is the end of the program.\n";
}

// Precondition: arg1 is the answer from the user
//				 arg2 is the value you wish to be greater than the users input.(or greater than or equal to the users input)
//				 arg3 if true is passed the function will use greater than or equal to
//					  if false is passed the function will use greater than.
// Postcondition: This function will return values greater than arg2
void upperLowerLimit(int& arg1, int arg2, bool arg3)
{
	if(arg3)
	{
		while(arg1<=arg2)
		{
			cout << "Enter a number less than or equal to " << arg2;
			cin >> arg1;
		}
	}
	else
	{
		while(arg1<arg2)
		{
			cout << "Enter a number less than " << arg2;
			cin >> arg1;
		}
	}		
}

// Precondition: nickels is the number of nickels
//				 dimes is the number of dimes
//				 quarters is the number of quarters
// Postcondition: This function will return the coin total as a double
double coinTotal(int nickels, int dimes, int quarters)
{
	double total;
	total = (nickels * .05) + (dimes * .10) + (quarters * .25);
	return total;
}

// Precondition: pass in the total coin value as a double.
// Postcondition: returns the dollar value.
int dollars(double coinT)
{
	int counter = 0;
	while(coinT>1.0)
	{
		coinT-=1.0;
		counter++;
	}
	return counter;
}

/*
Enter the number of nickels: 13
Enter the number of dimes: 23
Enter the number of quarters: 23
Your total coin value is 8 dollars and 70 cents.
Would you like to enter new values?(y/n)
y
Enter the number of nickels: 2344 
Enter the number of dimes: 2932
Enter the number of quarters: 5837
Your total coin value is 1869 dollars and 65 cents.
Would you like to enter new values?(y/n)
n
This is the end of the program.
*/








