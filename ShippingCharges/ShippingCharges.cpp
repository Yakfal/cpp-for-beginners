//The Fast Freight Shipping Company charges the following rates:

//Weight of package                      Rate per 500 miles shipped

//--------------------------------------          --------------------------------------

//2kg or less                                                    $1.10

//Over 2 kg but not more than 6 kg            $2.20

//Over 6kg but not more than 10kg            $3.70

//Over 10 kg but not more than 20kg         $4.80

//Write a program that

//* In the main(), asks for the weight of the package and the distance it is to be shipped,

//* from the main(), send the data to a function "int calcShippingCharges(double, double" for processing.

//* return the results from "calcShippingCharges" to the call.

//* display the "weight , distance , shipping charges"

//* run the program until the user is finished using it.

//as always, comment well.

//Yamil Kas-Danouche
//10/01/2020
//This program was made with the purpose of having a program that will calculate the amount of money charged my shipment depending on distance
//and the weight of the packages.

#include <iostream>
using namespace std;
double calcShippingCharges(double, double);
double display(double, double, double);
double total_charge;
int main ()
{
    double shipcharge, w, d;

    cout << "Welcome to Fast Freight Shipping Company  ";
    cout << "\n";
    cout << "Please enter the weight in pounds of your package(limit, from 0 to 20 kilograms): ";
    cin>>w;

    cout << "Please enter the distance in miles to be shipped: ";
    cin>>d;

    shipcharge = calcShippingCharges(w, d);
    display(w,d,shipcharge);

    return 0;
}

double calcShippingCharges(double weight, double distance)
{
    double shipcharge;

    if (weight <= 2)
    shipcharge = (distance * 1.1*0.002);
    else if (weight > 2 && weight <= 6)
    shipcharge = (distance * 2.2*0.002);
    else if (weight > 6 && weight <= 10)
    shipcharge = (distance * 3.7*0.002);
    else if (weight > 10 && weight <= 20)
    shipcharge = (distance * 4.8*0.002);
    else
    cout << "Error incorrect input";


    return shipcharge;

}
double display(double weight ,double distance,double total_charge)
{
   cout << weight << endl;
   cout << distance << endl;
   cout << total_charge << endl;

}

