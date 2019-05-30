//
//  main.cpp
//  assignment24_ch8_4
//
//  Created by Kevin Gonzalez on 5/23/19.
//  Copyright © 2019 Kevin Gonzalez. All rights reserved.
//  Description: takes input as vector of integers. returns true if there the vector starts or ends with 2.

#include <iostream>
#include <vector>

using namespace std;

//Precondition: none
//Postcondition: fills array based on the size inputted by the user
void fillVector(vector<int>& v, int& size);

//Precondition: make sure size is greater than zero for this excersize
//Postcondition: outputs vector and whether there was a 2 at either end
void opArray(vector<int> v, int size);

//Precondition: none
//Postcondition: return false if their isn't a two or true if their is a two at either end of the vector
bool firstLast2(vector<int> v, int size);

int main()
{
    using namespace std;
    char bye = 'y';
    vector<int> v;
    int size;
    do
    {
        fillVector(v, size);
        opArray(v, size);
        do
        {
            cout << "Would you like to continue?" << endl;
            cin >> bye;
        }while (!(bye=='y'||bye=='Y'||bye=='N'||bye=='n'));
        v.resize(0); // this is necessary in order to clear the memory. if not you will only be appending data if the new vector is bigger than the other vector.
    }while (bye=='y'||bye=='Y');
    return 0;
}

// fills the vector with user choices
void fillVector(vector<int>& v, int& size)
{
    using namespace std;
    int num;
    cout << "How many numbers would you like?" << endl;
    cin >> size;
    for (unsigned int i = 0; i<size; i++)
    {
        cout << "Enter a number" << endl;
        cin >> num;
        v.push_back(num);
    }
}

// outputs the whether the 2 is or isnt at the end of the vector
void opArray(vector<int> v, int size)
{
    using namespace std;
    for (unsigned int i = 0; i<size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    if((firstLast2(v, size)))
    {
        cout << "There is either a 2 at the end or the beginning of the vector" << endl;
    }
    else
    {
        cout << "There isn't a two at the end or beginning." << endl;
    }
}

// returns true if their is a 2 at either end. else return false.
bool firstLast2(vector<int> v, int size)
{
    bool state = false;
    
    if (v[0]==2||v[size-1]==2)
    {
        state = true;
    }
    else
    {
        state = false;
    }
    
    return state;
}

/*
 How many numbers would you like?
 4
 Enter a number
 1
 Enter a number
 2
 Enter a number
 3
 Enter a number
 2
 1 2 3 2
 There is either a 2 at the end or the beginning of the vector
 Would you like to continue?
 y
 How many numbers would you like?
 7
 Enter a number
 7
 Enter a number
 6
 Enter a number
 5
 Enter a number
 4
 Enter a number
 3
 Enter a number
 1
 Enter a number
 2
 7 6 5 4 3 1 2
 There is either a 2 at the end or the beginning of the vector
 Would you like to continue?
 n
 Program ended with exit code: 0
 
 */
