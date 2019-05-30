//File Name: Assignment2_Chapter2_question5
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Group Project 3
//Description: Calculate the number of chocolate bar needed to eat to maintain weight based on user activity and inputs.
//Last Changed: March 9, 2019;

#include <iostream>

using namespace std;

int main()
{
    enum class activity {SEDENTARY, SOMEWHAT_ACTIVE, ACTIVE, HIGHLY_ACTIVE};
    const double MEN_WEIGHT_FACTOR = 6.3, WOMAN_HEIGHT_FACTOR = 4.7, WOMAN_AGE_FACTOR = 4.7, WOMAN_WEIGHT_FACTOR = 4.3, MEN_HEIGHT_FACTOR = 12.9, MEN_AGE_FACTOR = 6.8, CHOCO_CALORIES = 230;
    const int WOMAN_BASE_FACTOR = 655, MEN_BASE_FACTOR = 66;
    double weightInPounds = 0, heightInInches = 0, ageInYears = 0, BMR, numOfBars;
    char gender, escape, active;
    while(true)
    {
        cout << "Enter your weight in pounds" << endl;
        cin >> weightInPounds;
        cout << "Enter your height in inches" << endl;
        cin >> heightInInches;
        cout << "Enter age in years" << endl;
        cin >> ageInYears;
        cout << "Enter your gender, M for male or F for male" << endl;
        cin >> gender;
        cout << "How active are you? Enter 0 for sedentary, 1 for somewhat active, 2 for active and 3 for highly active." << endl;
        cin >> active;
        if(!(gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F'))
        {
            cout << "Wrong gender. Program will restart" << endl;
            continue;
        }
        if(gender == 'M' || gender == 'm')
        {
            BMR = MEN_BASE_FACTOR + (MEN_WEIGHT_FACTOR*weightInPounds) + (MEN_HEIGHT_FACTOR*heightInInches) - (MEN_AGE_FACTOR*ageInYears);
        }
        else
        {
            BMR = WOMAN_BASE_FACTOR + (WOMAN_WEIGHT_FACTOR*weightInPounds) + (WOMAN_HEIGHT_FACTOR*heightInInches) - (WOMAN_AGE_FACTOR*ageInYears);
        }
        switch(active)
        {
            case '0':
                BMR *= 1.20;
                break;
            case '1':
                BMR *= 1.30;
                break;
            case '2':
                BMR *= 1.40;
                break;
            case '3':
                BMR *= 1.50;
                break;
            default:
                cout << "You didn't enter a valid entry. Restarting the program..." << endl;
                continue;
        }
        numOfBars = BMR/CHOCO_CALORIES;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(0);
        cout << "You would need to eat " << numOfBars << endl;
        cout << "Enter Y to calculate another person or N to exit the program" << endl;
        cin >> escape;
        if(escape == 'N' || escape == 'n')
        {
            return 0;
        }
    }
}
