/*
	Description: Write a program will take in a user character and output it as the border for the letter C
	Author: Kevin Gonzalez
	Date: 6/13/2019 
	Note: You don't have permission to use this for school
*/

#include <iostream>

// Precondition: none
// Postcondition: This function will output text to the user as well as take input from the user. The function will repeat as many times as the
//				  user wishes.
void getUserText();

// Precondition: arg1 is a character, or symbol
// Postcondition: outputs a big letter C with the arg1 as the border.
void characterPrint(char arg1);

using namespace std;

int main()
{
	getUserText();
	return 0;
}

// Precondition: none
// Postcondition: This function will output text to the user as well as take input from the user. The function will repeat as many times as the
//				  user wishes.
void getUserText()
{
	char repeat = 'Y', letter;
	while(repeat == 'y'||repeat == 'Y')
	{
		cout << "Enter any character you'd like for the border: ";
		cin >> letter;
		characterPrint(letter);
		cout << "Would you like to enter a new value?(Y/N)" << endl;
		cin >> repeat;
		while(!(repeat == 'y'||repeat =='Y'||repeat == 'n'||repeat == 'N'))
		{
			cout << "Would you like to enter a new value?(Y/N)" << endl;
			cin >> repeat;
		}
	}
	cout << "This is the end of the program.\n";
}

// Precondition: arg1 is a character, or symbol
// Postcondition: outputs a big letter C with the arg1 as the border.
void characterPrint(char arg1)
{
	cout << "  " << arg1 << " " << arg1 << " " << arg1 << endl;
	cout << " " << arg1 << "    " << arg1 << endl;
	cout << arg1 << endl;
	cout << arg1 << endl;
	cout << arg1 << endl;
	cout << arg1 << endl;
	cout << arg1 << endl;
	cout << " " << arg1 << "    " << arg1 << endl;
	cout << "  " << arg1 << " " << arg1 << " " << arg1 << endl;
}

/* SAMPLE RUN
Enter any character you'd like for the border: ^
  ^ ^ ^
 ^    ^
^
^
^
^
^
 ^    ^
  ^ ^ ^
Would you like to enter a new value?(Y/N)
y
Enter any character you'd like for the border: *
  * * *
 *    *
*
*
*
*
*
 *    *
  * * *
Would you like to enter a new value?(Y/N)
y
Enter any character you'd like for the border: %
  % % %
 %    %
%
%
%
%
%
 %    %
  % % %
Would you like to enter a new value?(Y/N)
y
Enter any character you'd like for the border: !
  ! ! !
 !    !
!
!
!
!
!
 !    !
  ! ! !
Would you like to enter a new value?(Y/N)
y
Enter any character you'd like for the border: C
  C C C
 C    C
C
C
C
C
C
 C    C
  C C C
Would you like to enter a new value?(Y/N)
n
This is the end of the program.
*/