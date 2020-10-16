/*
Write a program that lest the user play the game of Rock, Paper, Scissors against the computer. The program should work as follows.

When the program begins, a random number in the range of 1 through 3 is generated.  If the number is 1, than the computer has chosen rock.  If the number is 2 then the computer has chosen paper.  If the number is 3, then the computer has chosen scissors.  (don’t display the computer’s choice yet.

The user enters his or her choice of “rock”, “paper”, or “scissors” at the key-board. (you can use a menu if you prefer)

The computer’s choice is displayed

A winner is selected according the to following rules:

If one player chooses rock and the computer chooses scissors, than rock wins (the rock smashes the scissors.)

If one player chooses scissors and the computerr chooses paper, then scissors win. (scissors cut paper)

If one player chooses paper and the computer chooses rock, then paper wins (paper wraps rock)

If both players make the same choice, the game must be played again to determine the winner.

Be sure to keep track of the number of wins for the player and computer.

Program should run until the player is finished with the game.

When players is finished running the program, it should display the total wins and determine the winner.
 */
//Yamil Kas-Danouche
//09/28/2020
// this program was made with the intencion of recreate the popular game of rock paper scissors having the computer as one of the players, and the user as the other player
// also this program helps to practice how the random number generator works.
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int winner(int c, int u);

int user_score = 0, computer_score = 0;

int main()
{
srand(time(NULL));

int userChoice;
char user_selection;

do
    {
    int computerChoice = rand()%3 +1;

    cout << " Choose Rock, Paper, or scissors" << endl;
    cout << "1,2 or 3" << endl;
    cin >>userChoice;

    if (computerChoice == 1)
        cout << "The computer chose rock"<< endl;
        else if (computerChoice == 2)
        cout << "The computer chose paper"<< endl;
        else if (computerChoice == 3)
        cout << "The computer chose scissors"<< endl;

    winner(computerChoice, userChoice);

    cout << "Wanna try it again? (Y/N)" << endl;
    cin >> user_selection;

    } while (user_selection == 'y'|| user_selection == 'Y');

    cout <<"Your wins : " << user_score << endl;
    cout <<"Computer wins : " << computer_score << endl;

    return 0;
}

int winner (int c, int u)
{
while ( c == u )
{
    cout << "it's a tie"<< endl;
    cout <<" choose again " << endl;
    cin >> u;
    c = rand()%3 +1;
}

if (c == 1 && u == 2)
{
    cout <<"You win" << endl;
    user_score++;
}

    else if (c == 2 && u == 3)
    {
        cout <<"You win" << endl;
        user_score++;
    }

    else if (c == 3 && u == 1)
    {
        cout <<"You win"<< endl;
        user_score++;
    }

    else
    {
        cout <<"computer wins" << endl;
        computer_score++;
    }
}
