//Write a program that will accept two numbers from the keyboard.
//Send those numbers to a function that will add them together and display the results.
#include <iostream>

using namespace std;
int addNumbers(int a,int b);
int main()
{
    int n1,n2, add;
    cout << "Enter first number" << endl;
    cin >> n1;
    cout << "enter second number" << endl;
    cin >> n2;

    add = addNumbers(n1,n2);

    return 0;
}

int addNumbers( int a, int b)
{

    int c = a+b;
 cout << "solution : " << c;

 return 0;
}



