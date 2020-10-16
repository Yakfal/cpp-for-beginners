/*
Write a program that lets the user enter four quarterly sales figures for six divisions of a company.
The Figures should be stored in a two-dimensional array.  Once the figures are entered,(use a random() number generator),
the program should display the following data for each.



*  a list of the sales figures by division

*each division's highest sales

*each division's lowest sales

*each division yearly sales

*total of all sales for all divisions.

*/



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int highest,lowest;
    int rownumber = 6;
    int colnumber = 4;
    int table[rownumber][colnumber];
    double sumrow = 0;

    for (int row = 0 ; row < rownumber; row++ )
        {

            for(int col = 0 ; col < colnumber; col++)
            {

                cout  <<"for division " << row + 1 << " enter quarterly sale number "<< col +1 <<endl;
                cin >> table[row][col];

            }
            cout <<endl;
        }


        for (int row = 0 ; row <rownumber ; row++)
        {
            cout  <<"\for division " << row + 1 << endl;
          for(int col = 0 ; col < colnumber ; col++)
            {
            cout  << " the value for quarter "  << col +1 << " will be " << table [row][col] <<endl;

            }
            cout <<""<<endl;
        }

        int total = 0;
        for (int row = 0; row <rownumber ; row ++)
        {
            highest = table[row][0];
            lowest = table[row][0];
            sumrow = 0;

            for (int col = 0; col < colnumber; col++)
            {
                if (highest <table[row][col])
                    highest = table[row][col];
                if (lowest > table[row][col])
                    lowest = table[row][col];
                sumrow +=table[row][col];

            }
            cout <<"division  " <<row +1<<"  highest value:  "<< highest << endl;
            cout << "division  " <<row +1 <<"  lowest value:  " << lowest << endl;
            cout << "division  " << row  +1<< "  total value:  " << sumrow<< endl;
            total += sumrow;
            cout << endl;

        }

    cout << " total of all numbers:  " << total << endl;

    return 0;
}
