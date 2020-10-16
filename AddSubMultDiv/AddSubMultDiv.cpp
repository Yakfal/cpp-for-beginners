//Yamil Kas-Danouche
//08/29/2020
//I created this program with the purpose of learning and
//getting more familiar with c++, and also this program is
//the foot steps of a simple calculator.

#include <iostream>

using namespace std;

int main()
{
    int value1;
    int value2;
    int value3;
    int value4;
    int value5;
    int x;
    int y;
    int z;
    cout << "what number do you want?" << endl;
    cin>> value1;
    cout<<"what value do you wanna substract to it?" <<endl;
    cin>> value2;
    x=value1-value2;
    cout<<x<<endl;
    cout<<"what number do you wanna add to your result?"<<endl;
    cin >>value3;
    cout << x+value3<<endl;
    cout <<"what number do you wanna multiply it for?"<<endl;
    cin >> value4;
    y=x+value3;
    cout <<y*value4<<endl;
    cout <<"what number do you wanna divide it for?"<<endl;
    z=y*value4;
    cin>>value5;
    cout <<"here is your result"<<endl;
    cout<<z/value5<<endl;

    return 0;
}
