////////////////////////////////////////////////////////////////////////
// Question 3 from chapter 1
///////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
    double tCoins, tDimes, tQuarters, tNickles;
    int quarters, dimes, nickles;
    cout << "Enter the number of quarters, dimes and nickles.\n";
    cout << "Quarters: ";
    cin >> quarters;
    tQuarters = quarters * .25;
    cout << "Dimes: ";
    cin >> dimes;
    tDimes = dimes * .10;
    cout << "Nickles: ";
    cin >> nickles;
    tNickles = nickles * .05;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The coins are worth ";
    tCoins = tNickles + tDimes + tQuarters;
    if(tCoins >= 1)
    {
        cout << "$" << tCoins << endl;
    }
    else
    {
        cout << tCoins << " cents." << endl;
    }
    return 0;
}
