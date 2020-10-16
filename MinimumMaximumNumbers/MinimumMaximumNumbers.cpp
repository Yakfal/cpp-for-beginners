//Yamil Kas-Danouche
//9/11/2020
//This is a simple program which has the function of letting you enter two numbers and telling you which one is greater or smaller, or if they are equal.
//the purpose of this program is to help me understand better how to use if and state special cases for different situations.
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers and this program will " << endl;
    cout << "tell you which one is greater smaller or if they are equal " << endl;
    int a;
    int b;
    cout << "Enter Fist number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    if (a<b)
    cout << a << " < " << b << endl;
        else if (a>b)
        cout << a << " > " << b << endl;
        else
        cout << a <<" = " << b << endl;


    return 0;
}
