//Yamil Kas-Danouche
//09/06/2020
// This program was made with the purpose of calculating a meal, and based on the
// original price, know how much was going to be the total after counting the taxes
//and the tips.
#include <iostream>

using namespace std;

int main()
{
    double tax;
    double bc;
    double tip;
    double mc;
    double tb;
    cout << "Enter Bill amount:" << endl;
    cin >> mc;
    tax = 0.0675*mc;
     bc = tax+mc;
     tip = 0.15*bc;
     tb = bc+tip;
    cout << "Meal Cost:" << mc << endl;
     cout << "Taxes:" << tax << endl;
     cout << "Tips:" << tip << endl;
     cout << "Total Bill:" << tb << endl;


    return 0;
}
