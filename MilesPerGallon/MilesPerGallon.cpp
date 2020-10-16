//Yamil Kas-Danouche
//08/31/2020
//The purpose of this program was to properly display
//and solve a series of equations, and specifically in this
//program, to calculate the Miles per Gallon used.

#include <iostream>

using namespace std;

int main()
{
    double begMiles;
    double endMiles;
    double gallonsused;
    double MPG;


    cout << "Enter Beg Miles";
    cin >> begMiles;
    cout << "Enter end Miles";
    cin >> endMiles;
    cout << "Enter Gallons Used";
    cin >> gallonsused;
    MPG = (endMiles-begMiles)/gallonsused;
    cout << "Beg Miles: " << begMiles << endl;
    cout << "End Miles: " << endMiles << endl;
    cout << "Gallons Used: " << gallonsused << endl;
    cout <<" MPG: "<< MPG << endl;
    return 0;
}
