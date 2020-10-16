/*
SafestDrivingArea.cpp

Write a program that determines which of five geographic regions within a major city(North, South, East, West, and Central0 had the fewest reported automobile accidents last year.  It should have the following two function which are called from the main.

getNumAccident. It asks the user for the number automobile accidents reported in that region during the last year, validate the input, then retruns it.  It should be called once for each city region.

FindLowest.  Is passed from the main, the five accident totals.  It determines which is the smallest and prints the name of the region, along with its accident figure.



Input validations:  Do not accept an accident number that is less than 0.


*/
//Yamil Kas-Danouche
//10/5/2020
//Safest Driving Area - This program determines which of five geographic
// regions within a major city (North, South, East, West, and Central) had
// the fewest reported automobile accidents last year.

#include <iostream>
using namespace std;

int getNumAccidents(int, string);
void findLowest(int, int, int, int, int);

int main()
{

   int regionNorth = 0,
       regionSouth = 0,
       regionEast = 0,
       regionWest = 0,
       regionCentral = 0,
       numAccidents = 0;


   cout << "\t\tTraffic Control Center - Accident Reports\n\n"
      << "Enter the number of accidents that occured in each\n"
      << "of the following regions: North, South, East, West\n"
      << "and Central"<< endl;


   regionNorth = getNumAccidents(numAccidents, " North: ");
   regionSouth = getNumAccidents(numAccidents, " South: ");
   regionEast = getNumAccidents(numAccidents, " East: ");
   regionWest = getNumAccidents(numAccidents, " West: ");
   regionCentral = getNumAccidents(numAccidents, " Central: ");


   findLowest(regionNorth, regionSouth, regionEast,
              regionWest, regionCentral);

   return 0;
}



int getNumAccidents(int accidents, string regionName)
{
   cout << "Accident Reports - " << regionName;

   cin >> accidents;


   while (accidents < 0)
   {
      cout << "\nError! The number of traffic accidents entered\n"
           << "is invalid. Please enter 0 if applicable, or any\n"
           << "other number above 0.\n"
           << "Number of accidents: " << regionName;
      cin >> accidents;
   }

   return accidents;
}



void findLowest(int lowestNorth, int lowestSouth, int lowestEast,
                int lowestWest, int lowestCentral)
{

   string regionName = " ";


   int lowest = lowestNorth;


   lowest = lowestSouth < lowest ? lowestSouth : lowest;
   lowest = lowestEast < lowest ? lowestEast : lowest;
   lowest = lowestWest < lowest ? lowestWest : lowest;
   lowest = lowestCentral < lowest ? lowestCentral : lowest;


   regionName = lowestNorth == lowest ? " North" : regionName;
   regionName = lowestSouth == lowest ? " South" : regionName;
   regionName = lowestEast == lowest ? " East" : regionName;
   regionName = lowestWest == lowest ? " West" : regionName;
   regionName = lowestCentral == lowest ? " Central" : regionName;


   cout << "\nAccident Report Summary: " << regionName << "\n"
      << "With " << lowest << " automobile accidents,\n"
      << regionName << " is the safest driving area.\n";
}
