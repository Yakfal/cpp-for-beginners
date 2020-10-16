//Yamil Kas-Danouche
//9/22/2020
// This program was made to create a menu with a list of options with different calculators, also
// The purpose of this program is for me to practice how to make a menu and use mathematical terms like logarithm, square root,
//and power.
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
void sqrt();
void powerof();
void multiplication();
void log();

int main()
{
    int menuchoice;
    cout << "Math lib math demo using fuctions" << endl;
    cout <<" 1) square root" << endl;
    cout << "2) power of" << endl;
    cout << "3) multiplication" << endl;
    cout << "4) log of" << endl;
    cout << "enter choice" << endl;
    cin >> menuchoice;

    while (menuchoice < 1 || menuchoice > 4)
    {
        cout << "invalid choice: choose from 1 to 4";
        cin >> menuchoice;
    }
    if (menuchoice == 1)
    {
            sqrt();
    }
    else if (menuchoice == 2)
    {
            powerof();

    }
    else if (menuchoice == 3)
            multiplication();
    else if (menuchoice == 4)
        log();
        else
            cout << "thats not an option from the list, choose a number from 1 to 4" <<endl;
    return 0;
}

void sqrt()
{
    int number1;
    int total;
    cout <<"enter a value to find squareroot:";
    cin >> number1;
    total = sqrt(number1);

    cout << "total =" << total;

}

void powerof()
{
   int base, exponent, total;
   cout << "enter the base";
   cin >> base;
   cout << " enter the exponent";
   cin >> exponent;
   total = pow (base,exponent);
   cout << "total power = " << total << "\n\n";
}
void multiplication()
{
int number1, number2, total;
cout << "enter the first number";
cin >> number1;
cout << "enter the second number to multiply it for the first one";
cin >> number2;
total = number1*number2;
cout << "total = " << total << "\n\n";
}

void log()
{
    double number, total;
    cout << "enter number";
    cin >> number;
    total = log(number);
    cout << "total = " << total << "\n\n";
    }
