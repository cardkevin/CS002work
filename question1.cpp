////////////////////////////////////////////////////////////////////////
// Question 1 from chapter 1
///////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
    int int1, int2, sum, product;
    cout << "First integer: ";
    cin >> int1;
    cout << "Second integer: ";
    cin >> int2;
    sum = int1 + int2;
    product = int1 * int2;
    cout << "The sum is " << sum << " and the product is " << product << endl;
    cout << "This is the end of the program.\n";
    return 0;
}
