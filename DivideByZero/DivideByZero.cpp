//Yamil Kas-Danouche
//9//11/2020
//This program was created with the purpose of dividing random numbers and giving a answer, but also including the special case when a number
//is divided by zero, and because we know that there no solution for a division of zero, the program will state that you cannot divide by zero
//if such number is used.
#include <iostream>

using namespace std;

int main()
{
    cout << "this program will divide the first number you enter by the second one" << endl;

    double a;
    double b;
    double c;

    cout << "Enter number 1" << endl;
    cin >> a;
    cout << "Enter number 2" << endl;
    cin >> b;
    if (b > 0 && 0 > b)
    {
    c = a / b;
        cout << a << " / " << b << " = " << c << endl;
    }
    else if (b < 0)
    {
    c = a / b;
        cout << a << " / " << b << " = " << c << endl;
    }
    else
        cout << "cannot divide by zero" <<endl;


    return 0;
}
