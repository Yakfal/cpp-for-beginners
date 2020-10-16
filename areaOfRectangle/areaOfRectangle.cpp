//Yamil Kas-Danouche
//9/7/2020
//This program was created with the purpose of practice and to learn more about
//the order and the codes used to multiply two variables, in this case
//a width and a length in order to obtain the area of a rectangle.
#include <iostream>

using namespace std;

int main()
{
    int l;
    int w;
    int a;

    cout << "Enter the length of the rectangle:" << endl;
    cin >> l;
    cout << "Enter the width of the rectangle:" << endl;
    cin >> w;

    a = l*w;

    cout << "Area of the Rectangle:" << a << endl;
    return 0;
}
