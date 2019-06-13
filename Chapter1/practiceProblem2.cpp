/*
	Description: Print "C S !" in large block letters with astericks as boarders
	Author: Kevin Gonzalez
	Date: 6/13/2019 

*/
#include <iostream>

using namespace std;

//Precondition: none
void textToUser();

int main()
{
	textToUser();
	return 0;
}

//This function output the message to the user.
void textToUser()
{
	cout << "*************************************************\n\n"
		 << "            C C C           S S S S     ! !\n"
		 << "          C       C       S         S   ! !\n"
		 << "         C               S              ! !\n"
		 << "        C                 S             ! !\n"
		 << "        C                  S S S S      ! !\n"
		 << "        C                           S   ! !\n"
		 << "         C                           S  ! !\n"
		 << "          C       C       S         S      \n"
		 << "            C C C           S S S S     0 0\n\n"
		 << "*************************************************\n\n"
		 << "     Computer Science is Cool Stuff! ! !" << endl;
	cout << "This is the end of the program!\n";
}

/* SAMPLE OUTPUT
*************************************************

            C C C           S S S S     ! !
          C       C       S         S   ! !
         C               S              ! !
        C                 S             ! !
        C                  S S S S      ! !
        C                           S   ! !
         C                           S  ! !
          C       C       S         S      
            C C C           S S S S     0 0

*************************************************
This is the end of the program!
*/