//Yamil Kas-Danouche
// This program is smart, and can read your mind, so be careful with your choices. The legend says that only one person in a million can actually beat the
//program (lie). The purpose of this program is to learn how to use the random number generator and after many mathematical applications, find the
//answer, which will always be the same.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    string choice;
    double a,n,q;
    char x;
    unsigned seed = time(0);
    srand(seed);


        do
        {

            a = rand()%10 +1 ;
    cout << "Think of a number in your head from 1 to 100 and when you are ready enter 1" << endl;
    cin >> q;
    cout << "now double it, when you are ready enter 1" << endl;
    cin >> q;
    cout <<"Now add " << a << " to your number, when you are ready enter 1" << endl;
    cin >> q;
    cout << "Divide your result by 2, when you are ready enter 1" << endl;
    cin >> q;
    cout << "subtract your the original number that you thought to your result, when you are ready enter 1" << endl;
    cin >> q;
    cout << "Now I, the Oraculus program, will guess what your number is, ready for my guess? enter 1 if you are ready " << endl;
    cout << "to see the result" <<endl;
    cin >> q;
    n = a/2;
    cout << n <<endl;
    cout << "do you wanna try it again? (Y/N)" <<endl;
    cin >> x;

    }
    while (x == 'y' || x == 'Y');





    return 0;
}
