/*
Write a program that asks the user to enter today’s sales for five stores.
The program should then display a bar graph comparing each store’s sales.
Create each bar in the bar graph by displaying a row of asterisks.
Each asterisk should represent $100 of sales.



Here is an example of the program’s output.



Enter today’s sales for store 1:  1000

Enter today’s sales for store 2:  1200

Enter today’s sales for store 3:  1800

Enter today’s sales for store 4:  800

Enter today’s sales for store 5:  1900



SALES BAR CHART:

--------------------------

Store 1:  **********

Store 2:  ************

Store 3:  ******************

Store 4:  ********

Store 5:  *******************

*/



#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    int nstores = 5;
    int table[nstores];

    for (int row = 0 ; row < nstores; row++ )
    {
        cout << "enter todays sales for store "<< row+1 <<endl;
        cin >> table[row];

    }
        for (int row = 0 ; row < nstores; row++ )
        {
            string dots(table[row]/100,'*');
            cout << "store " << row+1 << " : " << dots << endl;
        }




    cout << endl;

    return 0;
}

