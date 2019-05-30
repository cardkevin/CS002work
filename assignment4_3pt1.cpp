//File Name: Assignment2_Chapter2_question4
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Assignment Number:2
//Description: Check if a sphere will sink of float based on user input
//Last Changed: March 6,2019.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int weightOfSphere;
    // the variable fourThirds is used in place of (4/3) because using that in a calculation only gives you 1
    double buoyantForce, weightOfWater = 62.4, volumeOfSphere, radiusOfSphere, fourThirds = 1.33333;
    char escape;
    while(true)
    {
        cout << "Enter the weight of the object in pounds" << endl;
        cin >> weightOfSphere;
        cout << "Enter the radius of the sphere in feet." << endl;
        cin >> radiusOfSphere;
        // M_PI is a part if the cmath library. You can either use this or set a constant to the same value as
        // pi. pow is also part of the cmath library. pow is a function that has two arguements. The first is
        // the base and the second is the exponent.
        
        volumeOfSphere = fourThirds*M_PI*pow(radiusOfSphere, 3);
        buoyantForce = volumeOfSphere * weightOfWater;
        if (buoyantForce >= weightOfSphere)
        {
            cout << "This object will float!" << endl;
        }
        else
        {
            cout << "This object will sink!" << endl;
        }
        cout << "Would you like to continue (Y/N)" << endl;
        cin >> escape;
        if(escape == 'n' || escape == 'N')
        {
            return 0;
        }
    }
}

/*
 Enter the weight of the object in pounds
 100
 Enter the radius of the sphere in feet.
 1
 This object will float!
 Would you like to continue (Y/N)
 y
 Enter the weight of the object in pounds
 270
 Enter the radius of the sphere in feet.
 1
 This object will sink!
 Would you like to continue (Y/N)
*/
