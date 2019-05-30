//File Name: assignment5_1.cpp
//Author: Kevin Gonzalez
//Email: kgonzalez15@go.pasadena.edu
//Group Project
//Description: Ask a user for the number of hands and card types for the game of blackjack.
//Last Changed: March 9,2019;

#include <iostream>

using namespace std;

int main()
{
    char cardType, escape;
    /*
     cardSum is the variable to store the values as it goes through the while loop. aceCounter is used to store the amount of aces that are input. numberOfCardForUser is the number of cards this is also used for the counter in the while loop. alternative score is used to store the value of the ace scores, in black jack when the low ace score is used it is known as a soft score.
     */
    int cardSum, aceCounter, numberOfCardForUser, cardCounter, alternativeScore;
    
    while(true)
    {
        // initialize here so that they're reset if the user wants to repeat the program.
        cardSum = 0;
        cardCounter=1;
        aceCounter=0;
        cout << "Enter number of card." << endl;
        cin >> numberOfCardForUser;
        
        while(cardCounter <= numberOfCardForUser)
        {
            cout << "Enter the cards you have. Example 2,3,4,5,6,7,8,9,T,J,Q,K,A" << endl;
            cin >> cardType;
            switch(cardType)
            {
                case '2':
                    cardSum += 2;
                    break;
                case '3':
                    cardSum += 3;
                    break;
                case '4':
                    cardSum += 4;
                    break;
                case '5':
                    cardSum += 5;
                    break;
                case '6':
                    cardSum += 6;
                    break;
                case '7':
                    cardSum += 7;
                    break;
                case '8':
                    cardSum += 8;
                    break;
                case '9':
                    cardSum += 9;
                    break;
                case 't':
                case 'T':
                case 'j':
                case 'J':
                case 'q':
                case 'Q':
                case 'k':
                case 'K':
                    cardSum += 10;
                    break;
                case 'a':
                case 'A':
                    cardSum += 11;
                    aceCounter += 1;
                    break;
                // This resets the progam to the entry of the cards.
                default:
                    cout << "You did not enter a valid entry. Please enter an appropriate value. Restarting from the 1st card. \nEnter first card" << endl;
                    cin >> cardType;
                    continue;
            }
            cardCounter++;
        }
    alternativeScore = cardSum-(aceCounter*10);
    if(cardSum <= 21 && aceCounter > 0)
    {
        cout << "You have a hard " << cardSum << " or a soft " << alternativeScore << endl;
    }
    // This else if checks the soft score and outputs that result.
    else if(cardSum > 21 && alternativeScore <= 21 && aceCounter > 0)
    {
        cout << "You have a soft " << alternativeScore << endl;
    }
    else if(cardSum <=21)
    {
        cout << "Your hand came out to " << cardSum << endl;
    }
    else
    {
        cout << "Bust" << endl;
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
 Enter number of card.
 2
 Enter the cards you have. Example 2,3,4,5,6,7,8,9,T,J,Q,K,A
 s
 You did not enter a valid entry. Please enter an appropriate value.
 2
 Enter the cards you have. Example 2,3,4,5,6,7,8,9,T,J,Q,K,A
 2
 Enter the cards you have. Example 2,3,4,5,6,7,8,9,T,J,Q,K,A
 2
 Your hand came out to 4
 Would you like to continue (Y/N)
 */
