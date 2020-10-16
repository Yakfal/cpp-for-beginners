//Yamil Kas-Danouche
//09/02/2020
//This program helps me to understand how to work with the commands
//"cin" and "cout" using the example of a deposit and withdraw of a
//bank account.
#include <iostream>

using namespace std;

int main()
{
    int beg_bal;
    int moneyD;
    int moneyW;
    int x;
    int BAB;
    beg_bal=5000;
    cout << "How much money do you want to deposit?" << endl;
    cin >> moneyD;
    x=beg_bal+moneyD;
    cout << "How much money do you want to Withdraw?" << endl;
    cin >> moneyW;
    BAB=x-moneyW;
    cout << "beginning_balance:" << beg_bal << endl;
    cout << "money_deposited:" << moneyD << endl;
    cout << "money_withdrawn:" << moneyW << endl;
    cout << "Bank_Account_Balance:" << BAB << endl;



    return 0;
}
