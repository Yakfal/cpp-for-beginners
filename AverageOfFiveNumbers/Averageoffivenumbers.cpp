//Yamil Kas-Danouche
//09/03/2020
//This program was created with the purpose of learning how to properly apply the
//knowledge we have about "cin" "cout" and using formulas to calculate
//numbers and making equations.
#include <iostream>

using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int a;
    int b;
    a=5;
    cout << "Enter fist number:" << endl;
    cin >> n1;
    cout << "Enter second number:" << endl;
    cin >> n2;
    cout << "Enter third number:" << endl;
    cin >> n3;
    cout << "Enter fourth number:" << endl;
    cin >> n4;
    cout << "Enter fifth number:" << endl;
    cin >> n5;
    b=(n1+n2+n3+n4+n5)/(a);
    cout << "Average =" << b << endl;
    return 0;
}
