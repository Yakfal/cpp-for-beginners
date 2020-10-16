


/*presentValue.cpp

Suppose you want to deposit a certain amount of money into a savings account, and
 then leave it alone to draw interest for the next 10 years.
 At the end of 10 years you would like to have $10,000 in the account.
 How much do you need to deposit today to make that happen?
 You can use the following formula, wich is known as the present value formula, to find out:

P = F/((1+r)n

 The terms in the formula are as follows:

P - is the Present value, or the amount that you need to deposit today.

F  - is the future value that you want in the account. (In this case, F is $10,000)

r  - is the annual interest rate.

n  - is the number of years that you plan to let the money sit in the account.
Write a program that has a function named presentValue that performs this calculation.
The function should accept the future value, annual interest rate, and number of years as arguments.
It should return the present value, which is the amount that you need to deposit today.
Demonstrate the function in a program that lets the user experiment with different values for the formula�s terms.
*/
//Yamil Kas-Danouche
//10/01/2020
// this program was made with the intention of practicing how the rate of interest works on the banks and loans
//and at the same time, learn how the computer can calculate these values.
#include <iostream>
#include <cmath>
using namespace std;

double presentValue(double, double, double);
double inputValidate(double);
char inputValidate(char);

int main()
{
    double P,F,r,n;
    char user_choice;

    do
    {
        cout << "What is the annual interest rate? ";
        r = inputValidate(r);

        cout << "What is the future value? ";
        F = inputValidate(F);

        cout << "What is the number of years? ";
        n = inputValidate(n);

        P = presentValue(F, r, n);
        cout << "The present value should be: $"
             << P << '\n' << endl;

        cout << "Would you like to make another calculation? (y/n):";
      cin >> user_choice;

        cout << endl;

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
}

double presentValue(double F, double r, double n)
{
    return F / pow((1 + r), n);
}

double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";

    }
    return num;
}
