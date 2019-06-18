/*
 Description: This program will read the weight of a package of breakfast cereal in ounces and out 
 			  put the weight in metric tons as well as the number of boxes need to yield 1 metric ton of cereal
 Author: Kevin Gonzalez
 Date: 6/16/2019
 Note: You don't have permission to use this for school
*/

#include <iostream>

using namespace std;

// Preconditions: none
// Postcondition: get the user's text and allow the user to repeat the program as many times.
void getUserText();

// Precondition: weight is the weight of the cereal in ounces
// Postconditions: returns the weight of the cereal in tons
double weightOfCereal(double weight);

// Precondition: weight is the weight of the cereal in ounces
// Postconditions: returns the number of boxes needed to make up a ton
double numOfCereal(double weight);

// Precondition: userInput is the user input
//               limit is the number you'd like to compare
//               greaterThanEqualToOrGreaterThan if true will compare the userInput as less 
//                    than or equal to arg1 if false will compare the userInput as less than arg1
// Postcondition: guarantees that the user input the correct value
void upperLowerLimit(double usersInput, double limit, bool greaterThanEqualToOrGreaterThan);

int main()
{
	getUserText();
	return 0;
}

// Preconditions: none
// Postcondition: get the user's text and allow the user to repeat the program as many times.
void getUserText()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(8);	
	char repeat = 'y';
	double weightOfCerealInOunces;
	while(repeat == 'y'||repeat == 'Y')
	{
		cout << "Enter the weight of the cereal in ounces" << endl;
		cin >> weightOfCerealInOunces;
		upperLowerLimit(weightOfCerealInOunces,0,true);
		cout << "Your cereal weighs " << weightOfCereal(weightOfCerealInOunces) << " in tons" << endl;
		cout.precision(2);
		cout << "It would take " << numOfCereal(weightOfCerealInOunces) << " to make 1 ton." << endl;
		cout << "Do you want to repeat the program?(Y/N)" << endl;
		cin >> repeat;
		while(!(repeat == 'y'||repeat == 'Y'||repeat == 'n'||repeat == 'N'))
		{
			cout << "Do you want to repeat the program?(Y/N)" << endl;
			cin >> repeat;
		}
	}
	cout << "This is the end of the program\n";
}
// Precondition: weight is the weight of the cereal in ounces
// Postconditions: returns the weight of the cereal in tons
double weightOfCereal(double weight)
{
	const double METRIC_TON_IN_OUNCES = 35273.92;
	double convertedWeight = weight / METRIC_TON_IN_OUNCES;
	return convertedWeight;
}

// Precondition: weight is the weight of the cereal in ounces
// Postconditions: returns the number of boxes needed to make up a ton
double numOfCereal(double weight)
{
	const double METRIC_TON_IN_OUNCES = 35273.92;
	double numberOfBoxes = METRIC_TON_IN_OUNCES / weight;
	return numberOfBoxes;
}

// Precondition: userInput is the user input
//               limit is the number you'd like to compare
//               greaterThanEqualToOrGreaterThan if true will compare the userInput as less 
//                    than or equal to arg1 if false will compare the userInput as less than arg1
// Postcondition: guarantees that the user input the correct value
void upperLowerLimit(double usersInput, double limit, bool greaterThanEqualToOrGreaterThan)
{
	if(greaterThanEqualToOrGreaterThan)
	{
		while(usersInput <= limit)
		{
			cout << "Enter the weight of the cereal in ounces" << endl;
			cin >> usersInput;
		}
	}
	else
	{
		while(usersInput < limit)
		{
			cout << "Enter the weight of the cereal in ounces" << endl;
			cin >> usersInput;
		}		
	}
}

/* SAMPLE RUN
Enter the weight of the cereal in ounces
1
Your cereal weighs 0.00002835 in tons
It would take 35273.92 to make 1 ton.
Do you want to repeat the program?(Y/N)
n
This is the end of the program
*/