/*
	Description: Get two numbers from the user and output the sum and product of those two numbers.
	Author: Kevin Gonzalez
	Date: 6/13/2019 

*/

#include <iostream>

//Precondition:none
//Postcondition: retrieve numbers from user. If user enters n then exit. else repeat
void textToUser();

//Precondition: none
//Postcondition: return the sum of the numbers.
int sum(int arg1, int arg2);

//Precondition: none
//Postcondition: return the product of the numbers.
int product(int arg1, int arg2);

using namespace std;

int main()
{
	textToUser();
	return 0;
}


// This function will ask the user for two numbers and store it. If the user wants to exit the program enter n else enter y to repeat.
void textToUser()
{
	int numOne, numTwo;
	char repeat = 'y';
	while(repeat=='y'||repeat=='Y')
	{
		cout << "Enter an integer" << endl;
		cin >> numOne;
		cout << "Enter another number" << endl;
		cin >> numTwo;
		cout << "The sum of these numbers is: " << sum(numOne, numTwo) << endl;
		cout << "The product of these numbers is: " << product(numOne, numTwo) << endl;
		cout << "Would you like to repeat the program?(y/n)" << endl;
		cin >> repeat;
		while(!(repeat=='y'||repeat=='Y'||repeat=='N'||repeat=='n'))
		{
			cout << "USER ERROR: Would you like to repeat the program?(y/n)" << endl;
			cin >> repeat;
		}
	}
	cout << "This is the end of the program.\n";
}

//This function will return the sum of two numbers.
int sum(int arg1, int arg2)
{
	int sum;
	sum = arg1 + arg2;
	return sum;
}

//This function will return the product of two numbers.
int product(int arg1, int arg2)
{
	int product;
	product = arg1 * arg2;
	return product;
}

/* SAMPLE RUN
Enter an integer
10
Enter another number
9
The sum of these numbers is: 19
The product of these numbers is: 90
Would you like to repeat the program?(y/n)
g
USER ERROR: Would you like to repeat the program?(y/n)
y
Enter an integer
90
Enter another number
1
The sum of these numbers is: 91
The product of these numbers is: 90
Would you like to repeat the program?(y/n)
n
*/