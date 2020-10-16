/*
RainfallStatistics.cpp

Write a program that lets the user enter the total rainfall for each of 12 months into an array of doubles.
The program should calculate and display the total rainfall for the year, the average monthly rainfall,
and the months with the highest and lowest amounts.

input validations: Don not accept negative numbers for monthly rainfall figures.

*/

//Yamil Kas-Danouche
//10/5/2020
//This program is made with the purpose of letting the user enter the total rainfall for each month, and then
//making a average of the monthly rain, then the total and which month has the highest and lowest rain fall. The
//program helps to understand how arrays work with functions.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;




int main ()
{
const int MONTHS = 12;
string name[MONTHS]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
int count= 0;
double rain[MONTHS];
double avg;
double year=0;
double highest;
string highMonth;
double lowest;
string lowMonth;




for(count = 0; count < MONTHS; count++) // ask user to enter amount of rainfall for each month
{
cout <<"How many inches of rain does "<< name[count];
cout<< " have? \n";
cin >> rain[count];
while (rain[count] < 0)
{
cout << "Please enter a number greater than 0."<< endl;
cin >> rain[count];
}
}
for(int count=0; count<MONTHS; count++) // totals up all the rainfall
year += rain[count];

avg = year / MONTHS;

for( int count = 0; count < MONTHS; count++) //spits out each month with its amount of rain
{
cout << name[count];
cout<< " has ";
cout<< rain[count] << " inches of rainfall.\n";
}


highest = rain[0]; // finds month with the highest amount of rain

for (count = 1 ;count < MONTHS; count++)
{
if (rain[count] > highest)
{
highMonth = name[count];
highest = rain[count];
}
}


lowest = rain[0]; // finds month with the least amount of rain

for (count = 1 ;count < MONTHS; count++)
{
if (rain[count] < lowest)
{
lowMonth = name[count];
lowest = rain[count];
}
}


cout << endl;

cout << setprecision(2) << fixed;

cout <<"Total Rainfall throughout the year is " <<year << " inches" << endl;

cout <<"The average monthly rainfall is " << avg << " inches"<< endl;

cout <<"The month with the highest amount of rainfall is " << highMonth << " with " << highest<< " inches."<< endl;

cout <<"The month with the lowest amount of rainfall is " << lowMonth << " with " << lowest<< " inches."<< endl;

return 0;
}


