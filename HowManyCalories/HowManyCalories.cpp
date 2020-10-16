//Yamil Kas-Danouche
//9/8/2020
//In this program, the command "if" was introduced for the first time
//, and the purpose of the program was to get accustomed to use this program,
//and also to learn how to set up an algorithm with the commands if, else if,
//and else. For example in this program, we calculate the calories consumed in
//a bag of cookies that contains 30 cookies.
#include <iostream>

using namespace std;

int main()
{
    int c;
    int g;
    cout << "Enter the number of cookies eaten:" << endl;
    cin >> g;
    c = g*300;
    if (g<=40&&g>=1)
        cout << "Amount of calories eaten:" << c << endl;
    else
        cout << "sorry, that is not a valid number" <<endl;

    return 0;
}
