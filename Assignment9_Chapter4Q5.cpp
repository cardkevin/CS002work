//File Name: Assignment7_Chapter3Q1.cpp
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Assignment 7
//Description: Give the price of a call based on day and time of call .
//Last Changed: March 11, 2019;

#include <iostream>
#include <cmath>

using namespace std;
double calorieCalc(int weight);
//This function with 1 arguement uses the weight to calculate the BMR for the user

double calorieCalc(int weight, int intensity, int time);
//This function with 3 arguments uses the weight, intensity and time to find the physical activity

double foodDigestion(int numOfCaloriesPerServing);
//this function output the number of energy used while eating your favorite food.

int weight = 0;

int main()
{
    char answer = 'y';
    while(answer == 'y' || answer == 'Y')
    {
        int active, caloriesPerServing, mins, first, second;
        cout << "Hello! Enter your weight in pounds!!" << endl;
        cin >> weight;
        while(!(weight>=50&&weight<=500))
        {
            cout << "Enter a weight between 50-500 pounds" << endl;
            cin >> weight;
        }
        cout << "Enter your level of activity\n"
        << "Here are some examples:\n"
        << "Activity            | Intensity\n"
        << "Running 10 mph      | 17\n"
        << "Running 6 mph       | 10\n"
        << "Basketball          | 8\n"
        << "Walking 1 mph       | 1\n"
        << "What is your level?" << endl;
        cin >> active;
        while(!(active>=0&&active<=17))
        {
            cout << "Enter an activity between 0-17" << endl;
            cin >> active;
        }
        cout << "Enter the number of minutes of your activity." << endl;
        cin >> mins;
        while(!(mins>=0&&mins<=120))
        {
            cout << "Enter a time between 0-120 minutes." << endl;
            cin >> mins;
        }
        cout << "Enter the number of calories per serving of your favorite food" << endl;
        cin >> caloriesPerServing;
        while(!(caloriesPerServing>=1&&caloriesPerServing<=2000))
        {
            cout << "Enter a time between 1-2000 calories." << endl;
            cin >> caloriesPerServing;
        }
        first = calorieCalc(weight);
        second = calorieCalc(weight, active, mins);
        cout << "You need to eat " << (first + second)/(caloriesPerServing-foodDigestion(caloriesPerServing)) << " servings of your favorite food to maintain your weight at your current level of activity." << endl;
        cout << "Would you like to repeat? (Y/N)" << endl;
        cin >> answer;
    }
    cout << "GoodBye" << endl;
}

double calorieCalc(int weight)
{
    double basalMetabolicRate = 0;
    basalMetabolicRate = 70 * pow((weight/2.2),.756);
    return basalMetabolicRate;
}

double calorieCalc(int weight, int intensity, int time)
{
    double physicalActivity = 0;
    physicalActivity = .0385 * intensity * weight * time;
    return physicalActivity;
}
double foodDigestion(int numOfCaloriesPerServing)
{
    double caloriesUsedForDigestion = 0;
    caloriesUsedForDigestion = numOfCaloriesPerServing * .1;
    return caloriesUsedForDigestion;
}
/*
 Hello! Enter your weight in pounds!!
 120
 Enter your level of activity
 Here are some examples:
 Activity            | Intensity
 Running 10 mph      | 17
 Running 6 mph       | 10
 Basketball          | 8
 Walking 1 mph       | 1
 What is your level?
 1
 Enter the number of minutes of your activity.
 10
 Enter the number of calories per serving of your favorite food
 1000
 You need to eat 1.65 servings of your favorite food to maintain your weight at your current level of activity.
 Would you like to repeat? (Y/N)
 y
 Hello! Enter your weight in pounds!!
 120
 Enter your level of activity
 Here are some examples:
 Activity            | Intensity
 Running 10 mph      | 17
 Running 6 mph       | 10
 Basketball          | 8
 Walking 1 mph       | 1
 What is your level?
 17
 Enter the number of minutes of your activity.
 1000
 Enter a time between 0-120 minutes.
 120
 Enter the number of calories per serving of your favorite food
 100000
 Enter a time between 1-2000 calories.
 100
 You need to eat 120.7 servings of your favorite food to maintain your weight at your current level of activity.
 Would you like to repeat? (Y/N)
 n
 Program ended with exit code: 0
 */
