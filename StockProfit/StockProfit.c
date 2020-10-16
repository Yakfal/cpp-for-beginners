/*
Use all available resources, do not ask for help from anyone in person or online.  HonorSystem.

StockProfit.cpp
The Profit from the sale of a stock can be calculated as follows;

Profit = ((NS x SP) – SC) – ((NS x PP) + PC)



Where NS is the number of shares,

SP is the sale price per share,

Sci s the sales commission paid,

PP is the purchase price per share, and

PC is the purchase commission paid.



If the calculation yields a positive value, then the sale of the stock resulted in a profit.

If the calculation yields a negative number, then the sale resulted in a loss.



Write a function that accepts as arguments the number of shares, the purchase price per share,
the purchase commission paid, the sale price per share, and the sale commission paid.
The function should return the profit (or loss) from the sale of stock.



Demonstrate the function in a program that asks the user to enter the necessary data and displays the amount of the profit or loss.
Have the program run until the user is finished using it.



Grading:

1)    25pts Comments

2)    25pts Professional code layout (indenting, easy to read, etc…)

3)    25pts Good variable names

4)    100pts Meets All requirements and runs correctly.

5)    25pts Good output layout.  NOTE: upto 5 bonus pts for creative output design
*/
#include <iostream>
using namespace std;
 int profit (int,int,int,int,int);
 int NS,SP,SC,PP,PC;
int main()
{
    cout << "enter number of shares" << endl;
    cin >> NS;
    cout << "enter the sale price per share" << endl;
    cin >> SP;
    cout << "enter sales commission paid" << endl;
    cin >> SC;
    cout << "enter price per share" << endl;
    cin >> PP;
    cout << "enter purchase commission paid" << endl;
    cin >> PC;
    cout << "profit : "<<profit << endl;

    return 0;
}
profit(NS,SP,SC,PP,PC)
{
    int profit;
    Profit = ((NS x SP) – SC) – ((NS x PP) + PC)
    return profit;
}


