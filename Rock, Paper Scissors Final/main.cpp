/* RockPaperScissors-V1.@ - Determines the game winner
C++ Programming version of the game
Name: Christian Millar
Date: 27 June 2022
Inputs: player1 and player2 - (R)ock, (P)aper, or (S)cissors
Output: Winner of the round
*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[])

{
char player1; // input for Player 1
char player2; // input for Player 2
char playAgain = 'y'; // loop control

cout << "Enter R P or S for rock, paper or scissors" << endl;
do
{
    cout << "Player 1 (RPS): ";
    cin >> player1;
    player1 = toupper(player1); // convert for easy comparisons

    cout << "Player 2 (RPS): ";
    cin >> player2;
    player2 = toupper(player2); // convert for easy comparisons

    if (player1 == 'R')
        
    {
        if (player2 == 'R')
            cout << "Tie game, nobody wins" << endl;
            else if (player2 == 'P')
            cout << "Paper covers rock - player 2 wins" << endl;
            else if (player2 == 'S')
            cout << "Rock breaks scissors - player 1 wins" << endl;
            else
            cout << "Illegal selection for player 2" << endl;
    }
    else if (player1 == 'P')
    {
            if (player2 == 'R')
            cout << "Paper covers rock - player 1 wins" << endl;
            else if (player2 == 'P')
            cout << "Tie game, nobody wins" << endl;
            else if (player2 == 'S')
            cout << "Scissors cut paper - player 2 wins" << endl;
            else
            cout << "Illegal selection for player 2" << endl;
    }
    else if (player1 == 'S')
    {
            if (player2 == 'R')
            cout << "Rock breaks scissors - player 2 wins" << endl;
            else if (player2 == 'P')
            cout << "Scissors cut paper - player 1 wins" << endl;
            else if (player2 == 'S')
            cout << "Tie game, nobody wins" << endl;
            else
            cout << "Illegal selection for player 2" << endl;
    }
    else
        cout << "Illegal selection for player 1" << endl;

    
    cout << "Do you want to play again?";
    cin >> playAgain;
    playAgain = toupper(playAgain) ;
    cout << endl; // blank line between games
}
while (playAgain == 'Y');
return 0;
}
