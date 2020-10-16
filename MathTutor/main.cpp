//Yamil Kas-Danouche
//9/22/2020
// This program helps to practice addition of numbers, and as well helps me to understand the basics of the random number generator, and
//how to make the program run until the user is done with the practice of such problems.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int n;


    unsigned seed = time(0);
    srand(seed);
    char x;

    do{
         a = rand()%10 + 1 ;
    b = rand()%10 + 1;
    cout << a << "+" << b <<endl;
    cout << "enter 1 when you are ready to see the answer" << endl;
    cin >> n;
    c = a + b;
    cout << a << "+" << b << "=" << c <<endl;
    cout << "Wanna try it again? (Y/N)" << endl;
    cin >> x;
    }
    while(x == 'Y'|| x == 'y');


    return 0;
}
