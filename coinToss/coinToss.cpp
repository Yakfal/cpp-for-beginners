//Yamil Kas-Danouche
//09/23/2020
// This program was created with the intension of teaching me how to program a random generator game, with the
//illustration of a coin, which only has one random variable, which is or heads, or tails.
//with the knowledge gained making this program, I expect to understand better how artificial intelligence works.
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;
int main()
{
    int a,b, your_score, cp_score;
    unsigned seed = time(0);
    srand(seed);
    char x;
    cp_score = 0;
    your_score = 0;


    do{
         a = rand()%2;
    cout << "enter your guess, will it be heads or tails? (1/0)" << endl;
    cin >> b;

    if (b == 1 || b == 0)
    {
        if (b == a)
        {
           cout << "You guessed correctly" << endl;
           your_score = your_score +1;
        }
        else
        {
            cout << "Try again, you guessed wrong" << endl;
            cp_score = cp_score +1;
        }
        cout << "Your score: " << your_score << endl;
        cout << "Cp score: " << cp_score << endl;
    }
    else
    cout << "the answer you enter can't be processed, use 1 or 0" << endl;
cout << "wanna try it again? (Y/N)" << endl;
cin >> x;
    }
while ( x == 'y' || x == 'Y');

    return 0;

}
