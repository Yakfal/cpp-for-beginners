/*
Write a program that will

a)     IN the main(), Create and array of size 50

b)     Call a function from the main to populate an array of  size 50 with random numbers, (seeded random numbers)

c)     call a function from the main() display the array

d)     Call a function from the main() to display the highest value

e)     Call a function from the main() to display the lowest value

f)      Call a function from the main() to display the total and average values

g)     Call a function from the main() to sequentially search the array and display if the value is or is-not in the array

NOTE: this program is a programming challenge on the exam and is the answer to a test question.
*/
//Yamil Kas-Danouche
//10/7/2020
//This program was made with the purpose of learning how to use a search function in array in order to find the
//location of an specific number that we want to find. The functions are void because we dont really need to return
// any value to the main function, we just want to display it.
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
    int arraySize = 50;
    int array[arraySize];


        createArray(array,arraySize);
        displayArray(array,arraySize);
        displayHighLowTotalAverage(array,arraySize);
        sequetialSearch(array,arraySize);

        //cout <<"enter value to search for:" << endl;
        //cin >> value;
        //found = binarySearch(array,arraySize,value);
       // if (found > -1 )
          //  cout << "the value of" << value <<"is found at array["<<found<<"]"<< endl;
       // else
           // cout <<"the value was not found !" << endl;
    return 0;
}
void createArray(int array[], int arraySize)
{

    for (int i=0;i<arraySize;i++)
    {
        array[i]=rand()%100+1 ;
    }
}

void displayArray(int array[],int arraySize)
{
    cout <<"display array : " << endl;
    for (int i=0;i<arraySize;i++)
    {
        cout <<"array ["<<i+1<<"]="<<array[i]<< endl;

    }
}
void displayHighLowTotalAverage(int array[],int arraySize)
{
    int high = array[0];
    int low = array[0];
    int total = 0;

    for (int i=0; i <arraySize; i++)
    {
        if(array[i]>high)
            high = array[i];
        if (array[i] < low)
            low = array[i];
        total += array[i];


    }
    cout <<"highest value: " <<high << endl;
    cout <<"lowest value: " << low<< endl;
    cout << " total value :" << total<< endl;
    cout << "average value :"<< (total/arraySize)<< endl;
    cout << "\n\n"<< endl;
}
void sequetialSearch(int array[],int arraySize)
{
    int found = 0;
    int value;

    cout <<"Enter value that you want to search"<< endl;
    cin >> value;

    for (int i=0; i <arraySize; i++)
        if(value == array[i])
        {
            found = 1;
            cout << value <<" is in the array, and is located at the column number " << i+1 <<"."<<endl;
        }
        if (found == 0)
        {
            cout << value << " is not found in the array " << endl;
        }
}
