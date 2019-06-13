/*
	Description: Write a program that takes in seconds and outputs how far the object would drop if it is dropped for that long.
	Author: Kevin Gonzalez
	Date: 6/13/2019 
	Note: You don't have permission to use this for school
*/
#include <iostream>

// Precondition: none
// Postcondition: This function will output text to the user as well as take input from the user. The function will repeat as many times as the
//				  user wishes.
void getUserText();

// Precondition: seconds is the number of seconds
// Postcondition: This function will return the distance the object traveled.
double howFar(double seconds);

// Precondition: arg1 is the answer from the user
//				 arg2 is the value you wish to be greater than the users input.(or greater than or equal to the users input)
//				 arg3 if true is passed the function will use greater than or equal to
//					  if false is passed the function will use greater than.
// Postcondition: This function will return values greater than arg2
void upperLowerLimit(double& arg1, double arg2, bool arg3);


using namespace std;

int main()
{
	getUserText();
	return 0;
}

// Precondition: none
// Postcondition: This function will output text to the user as well as take input from the user. The function will repeat as many times as the
//				  user wishes.
void getUserText()
{
	char repeat = 'Y';
	double seconds;
	while(repeat == 'y'||repeat == 'Y')
	{
		cout << "Enter the time in seconds: ";
		cin >> seconds;
		upperLowerLimit(seconds,0.0,true);
		cout << "You will fall a distance of " << howFar(seconds) << " feet." << endl;
		cout << "Would you like to enter a new value?(Y/N)" << endl;
		cin >> repeat;
		while(!(repeat == 'y'||repeat =='Y'||repeat == 'n'||repeat == 'N'))
		{
			cout << "Would you like to enter a new value?(Y/N)" << endl;
			cin >> repeat;
		}
	}
}

// Precondition: seconds is the number of seconds
// Postcondition: This function will return the distance the object traveled.
double howFar(double seconds)
{
	double distance = (32.0 * (seconds * seconds)) / 2.0;
	return distance;
}

// Precondition: arg1 is the answer from the user
//				 arg2 is the value you wish to be greater than the users input.(or greater than or equal to the users input)
//				 arg3 if true is passed the function will use greater than or equal to
//					  if false is passed the function will use greater than.
// Postcondition: This function will return values greater than arg2
void upperLowerLimit(double& arg1, double arg2, bool arg3)
{
	if(arg3)
	{
		while(arg1<=arg2)
		{
			cout << "Enter the time in seconds: ";
			cin >> arg1;
		}
	}
	else
	{
		while(arg1<arg2)
		{
			cout << "Enter the time in seconds: ";
			cin >> arg1;
		}
	}
}