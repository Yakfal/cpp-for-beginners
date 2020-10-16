//Yamil Kas-Danouche
//09/04/2020
// This program was made by defining four variables, and setting
//a formula to relate all the variables, and set a value for them,
//in this specific case, we are talking about three different types
// of tickets and the value of each one of them, in order to calculate
//the total sales at the end.
#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int C;
    int TS;
    cout << "How may tickets were sold for class A" << endl;
    cin >> A;
    cout << "How may tickets were sold for class B" << endl;
    cin >> B;
    cout << "How may tickets were sold for class C" << endl;
    cin >> C;
    TS = 15*A+12*B+9*C;
    cout << "Total amount of money collected:" << TS << endl;
    cout << "Total money collected for A:" << A*15 << endl;
    cout << "Total money collected for B:" << B*12 << endl;
    cout << "Total money collected for C:" << C*9 << endl;
    return 0;
}
