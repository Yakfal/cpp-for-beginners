/*
Use all available resources, do not ask for help from anyone in person or online.  HonorSystem.

You have a group of friends coming to visit for your high school reunion,
and you want to take them out to eat at a local restaurant.
You aren't sure if any of them have dietary restrictions, but your restaurant choices are as follows.

                                    Vegetarian                           Vegan                        Gluten-Free

Joes's Gourmet Burgers                    NO                               NO                                NO

Main Street Pizza                         YES                              NO                                YES

Corner Caf'e                              YES                              YES                               YES

Mama''s Fine Italian                      YES                               NO                                NO

The Chef's Kitchen                        YES                              YES                                YES

Write a program that asks whether any member of your party are
"vegetarian", "vegan", or "gluten-free",
then display only the restaurants that you may take the group to.

Make the program run until the user is finished using it.

Here is an example of the program's output:

****************************************************

*    Is anyone in your party a vegetarian?   (yes)

*    Is anyone in your party a vegan?  (no)

*    Is anyone in your party gluten-free?  (yes)

*    Here are your restaurant choices:

*                   Main Street Pizza Company

*                    Corner Cafe

*                    The chef's kitchen

**********************************************

Here is a second example of a possible program output:

****************************************************

*    Is anyone in your party a vegetarian?   (yes)

*    Is anyone in your party a vegan?  (yes)

*    Is anyone in your party gluten-free?  (yes)

*    Here are your restaurant choices:

*                    Corner Cafe

*                    The chef's kitchen

**********************************************

GRADING:

1)    25pts Comments

2)    25pts Professional code layout (indenting, easy to read, etc�)

3)    25pts Good variable names

4)    100pts Meets All requirements and runs correctly.

5)    25pts Good output layout.  NOTE: upto 5 bonus pts for creative output design


*/


#include <iostream>
#include <string>

using namespace std;
int number_restaurants = 5;
int food_Options = 3;


int main()
{
char vec,vc,gfc;
int restaurant_Choice[number_restaurants][food_Options];

for (int i = 0; i < number_restaurants; i++)
{
    for (int i = 0; i <food_Options; i++)
    {
        cout << "Is anyone in your party vegetarian?(Y/N)" << endl;
        cin >> vec;
        cout << "Is anyone in your party vegan?(Y/N)" << endl;
        cin >> vec;
        cout << "Is anyone in your party a gluten-free?(Y/N)" << endl;
        cin >> gfc;
    }

}


cout <<"here are your restaurant choices: " << endl;

return 0;
}