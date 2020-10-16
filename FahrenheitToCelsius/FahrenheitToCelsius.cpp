//Write a program that accepts a Fahrenheit temperature and outputs the equivalent centigrade temperature,

//Use a function to receive the Fahrenheit temperature,

//calculate the value in centigrade, and

//return the centigrade value for display

//Have the program continue until the user is finished using it.

 //       Celsius = 5/9*(Fahrenheit -32)


//Yamil Kas-Danouche
//09/28/2020
//this program was made with the purpose of taking the temperature in terms of fahrenheit and transform it into celsius using a function out of the main
// and displaying the value at the end. This program helps to practice the use of outer functions.

#include <iostream>
using namespace std;
int far();
char desition;
int f,c;
int display(int);
int calCelsius(int);
int main()
{

do
    {

    far();
    calCelsius(f);
    display(c);
    cout <<"wanna change another temperature value?(Y/N)" << endl;
	cin >> desition;
	}
	while (desition =='y'||desition =='Y');

    return 0;
}
int far()
{
    cout << "Enter temperature in fahrenheit" << endl;
    cin >> f;
}
int calCelsius(int f)
{
    c = 0.555555*(f -32);
}
int display(int c)
{
cout <<"Celsius :  " << c << endl;
}





