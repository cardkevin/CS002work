////////////////////////////////////////////////////////////////////////
// Question 4 from chapter 1
///////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
    int distance, seconds;
    cout << "Enter the number seconds: ";
    cin >> seconds;
    distance = (32 * (seconds*seconds))/2;
    cout << "Your distance is ";
    cout << distance << " feet" << endl;
    return 0;
}
