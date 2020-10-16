// Yamil Kas-Danouche
//9/7/2020
//This program is intended for the user to plug a value of temperature in Celsius
// and receive the answer of the equivalent number in Fahrenheit. The purpose of
//this program is to help me practice how to multiply a variable by a constant and
// present the result.
#include <iostream>

using namespace std;

int main()
{
    int C;
    int F;
    cout << "Enter Temperature in Celsius:" << endl;
    cin >> C;
    F = (9/5)*C+32;
    cout << "Fahrenheit conversion:" << F << endl;
    return 0;
}
