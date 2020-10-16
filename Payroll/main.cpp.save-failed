//Write a program that will include three functions.
 //1)    In the main() function, the program should ask the user to enter the number of hoursWorked and the rateOfPay.
 //Then send the data for processing the grossPay.  The function will  return the results back to the call.

//2)    Send the grossPay to a function that will calculate the netPay

//formula (netPay = grossPay – (grossPay * .25).  Return this value back to the call.

//3)    Send the netPay to a void function that will display a check  to the screen. (have fun with formatting the output)

//NOTE: Name the 3 functions as follows:

//int grossPayCalculate(int, int)

//int netPayCalculate(int)

//void payCheckDisplay(int)
#include <iostream>

using namespace std;

int grossPayCalculate(int,int);
int netPayCalculate(int);
void payCheckDisplay(int);

//Yamil Kas-Danouche
//10/01/2020
//this program was made with the intention of having a simple program to help a worker
//figure out what his gross income from his job is. The program help us practice how to use functions out of the main function.

int hoursWorked = 0;
int rateOfPay = 0;

int main()
{
    int grossPay;
    int netPay;

    cout << "how many hours did you worked?" << endl;
    cin >> hoursWorked;
    cout << "what is your rate of pay?" << endl;
    cin >> rateOfPay;

    grossPay = grossPayCalculate(hoursWorked,rateOfPay);
    netPay = netPayCalculate(grossPay);

    payCheckDisplay(netPay);
    return 0;
}
int grossPayCalculate(int hours, int pay)
{
    int grossPay;

    grossPay = hours*pay;

    return grossPay;
}

int netPayCalculate (int gross)
{
  int netPay;

  netPay = gross -(.25*gross);

 return netPay;
}

void payCheckDisplay(int net)
{
    cout << "your net pay was $" << net <<"." << endl;
}

