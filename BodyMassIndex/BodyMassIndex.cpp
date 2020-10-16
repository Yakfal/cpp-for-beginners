//Yamil Kas-Danouche
//9/11/2020
//The purpose of this program was to learn how to use if, else if and else to calculate the body mass index and then using general BMI number for sedentary people, the program will
// declare if the BMI calculated is optimal, underweight or overweight.
#include <iostream>

using namespace std;

int main()
{
    double w;
    double h;
    double bmi;

    cout << "Enter your weight" << endl;
    cin >> w;
    cout << "Enter your height" << endl;
    cin >> h;
 bmi=(w/(h*h))*703;
 cout << "BMI = " << bmi << endl ;
if ( bmi <=25 &&bmi >= 18.5)
    cout << "your weight is optimal" << endl;
else if (bmi > 25)
    cout << "you are overweight" << endl;
else if (bmi < 0)
    cout << "you can't enter a negative height or weight" << endl;
else
    cout << "you are underweight" << endl;

    return 0;
}
