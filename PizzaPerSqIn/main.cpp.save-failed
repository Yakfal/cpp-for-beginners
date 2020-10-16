//Yamil Kas-Danouche
//9/14/2020
//The purpose of this program is to compare two prices for pizza and depending on the area of each pizza, the program will tell you which
//option will be better, and for that reason, the program will ask you if the pizza is round or squared and depending on those values,
//the program will ask you for the radius or the length and the width.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double pi;
    int r;
    int l;
    int w;
    int a1;
    int a2;
    int p1;
    int p2;
    string ans;
    int pa1;
    int pa2;


    pi = 3.14159;
    cout <<" Enter the price of the first pizza" << endl;
    cin >> p1;
    cout << "Enter the price of the second pizza" << endl;
    cin >> p2;
    cout << "Is the first pizza round or squared?(R/S)" <<endl;
    cin >> ans;

    if (ans == "R")
    {
        cout <<"Enter the length of the pizza"<< endl;
        cin >> l;
        cout <<"Enter the width of the pizza"<< endl;
        cin >> w;
        a1 = l * w;
        cout << "area of pizza 1" << a1 << endl;

    }
    else
    {
        cout <<"Enter the radius of the pizza"<< endl;
        cin >> r;
        a1 = pi *r*r;
        cout << "area of pizza 1" << a1 <<endl;


    }
 cout << "Is the second pizza round or squared?(R/S)" <<endl;
    cin >> ans;
    if (ans == "R")
        {
        cout <<"Enter the length of the pizza"<< endl;
        cin >> l;
        cout <<"Enter the width of the pizza"<< endl;
        cin >> w;
        a2 = l * w;
        cout << "area of pizza 2" << a2 << endl;

        }
    else
    {
        cout <<"Enter the radius of the pizza"<< endl;
        cin >> r;
        a2 = pi *r*r;
        cout << "area of pizza 2" << a2 <<endl;


    }

pa1 = a1 / p1;
pa2 = a2 / p2;
    if (pa1 < pa2)
    cout << "The best option is pizza 2" << endl;
    else if (pa1 > pa2)
    cout << " Te best option is pizza 1" << endl;
    else
    cout << "pizza 1 and pizza 2 have the same value related to money and amount of pizza" << endl;

    return 0;
}
