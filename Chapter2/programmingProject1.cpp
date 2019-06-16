/*
	Description: Write a program will take in a user character and output it as the border for the letter C
	Author: Kevin Gonzalez
	Date: 6/15/2019 
	Note: You don't have permission to use this for school
*/

#include <iostream>
#include <cmath>

using namespace std;

void textToUser();

void upperLowerLimit(double& userInput, double arg1, bool arg2);

void charLimits(char& userChar, char arg1, char arg2, char arg3, char arg4);

float howMuchBeforeIDie(double weightOfUser, int weightToGrams, int numForConversion, int cansToKillMouse, int weightOfMouse);

int main()
{
	textToUser();
	cout << "This is the end of the program!" << endl;
	return 0;
}

void textToUser()
{
	const double ARTIFICIAL_SWEETENER_PER_CAN = .001, LOWEST_WEIGHT_OF_USER = 0.0; // ARTIFICIAL_SWEETENER_PER_CAN is 1/10 of 1%
	const int MASS_OF_MOUSE = 35, SWEETENER_TO_KILL_MOUSE = 5, WEIGHT_PER_HUNDRED_IN_GRAMS = 45400,
			  MASS_OF_SODA = 350, NUM_FOR_GRAM_CONVERSION = 100, CANS_BEFORE_KILLS_MOUSE = MASS_OF_SODA * ARTIFICIAL_SWEETENER_PER_CAN; // These value are in grams
	double futureWeightOfDieter;
	char repeat = 'y';
	while(repeat == 'y'||repeat == 'Y')
	{
		cout << "Enter the users future end weight: ";
		cin >> futureWeightOfDieter;
		upperLowerLimit(futureWeightOfDieter, LOWEST_WEIGHT_OF_USER, true);
		cout << "The max soda you can drink without dying is " << howMuchBeforeIDie(futureWeightOfDieter, WEIGHT_PER_HUNDRED_IN_GRAMS, NUM_FOR_GRAM_CONVERSION, CANS_BEFORE_KILLS_MOUSE, MASS_OF_MOUSE) << endl;
		cout << "Do you want to enter a new weight? (y/n)";
		cin >> repeat;
		charLimits(repeat,'y','Y','n','N');

	}
}

float howMuchBeforeIDie(double weightOfUser, int weightToGrams, int numForConversion, int cansToKillMouse, int weightOfMouse)
{
	float numberOfSodasToNotDie;
	numberOfSodasToNotDie = (float)weightOfUser/numForConversion;
	numberOfSodasToNotDie *= weightToGrams;
	numberOfSodasToNotDie /= weightOfMouse;
	numberOfSodasToNotDie /= cansToKillMouse;
	return numberOfSodasToNotDie;
}

void upperLowerLimit(double& userInput, double arg1, bool arg2)
{
	if (arg2)
	{
		while(userInput<=arg1)
		{
			cout << "Enter the users future end weight greater than or equal to " << arg1 << " : ";
			cin >> userInput;
		}
	}
	else
	{
		while(userInput<arg1)
		{
			cout << "Enter the users future end weight greater than " << arg1 << " : ";
			cin >> userInput;
		}
	}
}

void charLimits(char& userChar, char arg1, char arg2, char arg3, char arg4)
{
	while(!(userChar==arg1||userChar==arg2||userChar==arg3||userChar==arg4))
	{
		cout << "Would you like to continue?(y/n)";
		cin >> userChar;
	}
}