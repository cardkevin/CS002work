////////////////////////////////////////////////////////////////////////
// Question 1 from chapter 5
///////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int main()
{
    const double METRIX_TON_IN_OUNCES = 35273.92;
    double cerealBox, cerealBoxInTons, numOfCerealBoxes;
    
    while(true)
    {
        cout << "Enter weight of cereal box in ounces or enter \"0\" to quit: ";
        cin >> cerealBox;
        if (cerealBox == 0)
        {
            return 0;
        }
        cerealBoxInTons = cerealBox/METRIX_TON_IN_OUNCES;
        numOfCerealBoxes = METRIX_TON_IN_OUNCES/cerealBox;
        cout << "Your cereal weighs " << cerealBoxInTons <<" tons.\n"
             << "You would need " << numOfCerealBoxes << " boxes of this cerealto yield a ton!" << endl;
    }
}
