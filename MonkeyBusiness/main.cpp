/*
Use all available resources, do not ask for help from anyone in person or online.  HonorSystem.

MonkeyBusiness.cpp


A local zoo wants to keep track of how many pounds of Food Sinbad the monkey eats in a week.



Write a program that stores this information in an array, size 7.



a)     IN the main(), Create and array of size 7

b)     Call a function from the main to populate  the data

c)     call a function from the main() display the array

d)     Call a function from the main() to display the highest daily consumption

e)     Call a function from the main() to display the lowest daily consumption

f)      Call a function from the main() to display the total and average daily consumption

g)     Call a function from the main() to sequentially search the array and display if the value is or is-not in the array

h)    Have the program continue running until the user is finished using it.

 Grading

1)    25pts Comments

2)    25pts Professional code layout (indenting, easy to read, etc…)

3)    25pts Good variable names

4)    100pts Meets All requirements and runs correctly.

5)    25pts Good output layout.  NOTE: up to 5 bonus pts for creative output design
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void createArray(int[],int);
void displayArray(int[],int);
void displayHighLowTotalAverage(int[],int);
void sequetialSearch(int[],int);

int main()
{
    srand (time(0));
    int numberofdays = 7;
    int array[numberofdays];
    char x = 'y';

    while(x=='y'||x=='Y')
    {
        createArray(array, numberofdays);
        displayArray(array, numberofdays);
        displayHighLowTotalAverage(array, numberofdays);
        sequetialSearch(array, numberofdays);
        cout << "Wanna calculate the amount of food for another week? (Y/N)" << endl;
        cin >> x;
    }


        //cout <<"enter value to search for:" << endl;
        //cin >> value;
        //found = binarySearch(array,arraySize,value);
       // if (found > -1 )
          //  cout << "the value of" << value <<"is found at array["<<found<<"]"<< endl;
       // else
           // cout <<"the value was not found !" << endl;
    return 0;
}
void createArray(int array[], int numberofdays)
{

    for (int i=0;i<numberofdays;i++)
    {
        cout <<"enter the amount of food in pounds that Sinbad consumed in day "<< i+1 << endl;

        cin >> array[i] ;
    }
}

void displayArray(int array[],int numberofdays)
{
    cout <<"display array : " << endl;
    for (int i=0;i<numberofdays;i++)
    {
        cout <<"array ["<<i+1<<"]="<<array[i]<< endl;

    }
}
void displayHighLowTotalAverage(int array[],int numberofdays)
{
    int high = array[0];
    int low = array[0];
    int total = 0;

    for (int i=0; i <numberofdays; i++)
    {
        if(array[i]>high)
            high = array[i];
        if (array[i] < low)
            low = array[i];
        total += array[i];


    }
    cout <<"highest amount of food consumed: " <<high << endl;
    cout <<"lowest amount of food consumed: " << low<< endl;
    cout << " total amount of food consumed :" << total<< endl;
    cout << "average amount of food consumed :"<< (total/numberofdays)<< endl;
    cout << "\n\n"<< endl;
}
void sequetialSearch(int array[],int numberofdays)
{
    int found = 0;
    int value;
    char x ='y';

    while (x=='y'||x=='Y')
    {
    cout <<"Enter value that you want to search"<< endl;
    cin >> value;

    for (int i=0; i <numberofdays; i++)
    {

        if(value == array[i])
        {
            found = 1;
            cout << value <<" is in the array, and is located at the column number " << i+1 <<"."<<endl;
        }

    }
    if (found == 0)
        {
            found =0;
            cout << value << " is not found in the array " << endl;
        }
        cout << "wanna find another value? (Y/N)" << endl;
        cin >> x;
    }


}
