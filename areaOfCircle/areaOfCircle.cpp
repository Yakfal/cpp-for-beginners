//Yamil Kas-Danouche
//9/7/2020
//This program was made with the purpose of practicing the multiplication of
//variables in order to obtain a result, so we state what is the value of pi
// and we also ask the user to enter the value of the diameter in order to
//calculate the area of a circle.
#include <iostream>

using namespace std;

int main()
{
    double pi;
    int d;
    int r;
    double a;

    pi = 3.14159;
    cout << "Enter the Diameter of the circle:" << endl;
    cin >> d;

    r = d/2;

    a = pi*r*r;
    cout << "Radius of the circle:" << r << endl;
    cout << " Area of the circle:" << a << endl;
    return 0;
}
