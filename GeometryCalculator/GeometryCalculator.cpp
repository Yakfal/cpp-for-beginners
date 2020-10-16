/*Wow. We worked hard and released our Calculator out to the public along with fixing any bugs that arose.
The public love it! It's a huge hit! Our business analyst thought it would be a good idea to release a premium
calculator called the "Geometry Calculator" that will give the user a few extra features.

//Use the following business requirements to continue building on your previous calculator program.
For each menu item collect the data, then send the data to a function for processing and displaying.
Give it a pretty menu and organized and detailed comments to help future developers maintain your program.
This assignment is all about perfecting your calculator program. Be sure to make it look pretty! Millions of people will be
using your calculator program.

//This program should run until the user is finished using it.
//Geometry Calculator Menu:

//1.      Add

//2.      Subtract

//3.      Multiply

//4.      Divide

//5.      Raise to the Power

//6.      Square Root

//7.      Calculate the area of a Circle

//8.      Calculate the Area of a Rectangle

//9.      Calculate the Area of a Triangle



//Enter your choice (1-9) :

//If the user enters 1, the program should ask for two numbers and display the results.  Use the following formula:

  //        number1 + number2 = total

//If the user enters 2, the program should ask for two numbers and display the results.  Use the following formula:

  //        number1 – number2 = total

 //If the user enters 3, the program should ask for two numbers and display the results.  Use the following formula:

   //        number1 * number2 = total

 //If the user enters 4, the program should ask for two numbers and display the results.  Make sure the first number cannot be divided by 0.  Use the following formula:

   //        number1 / number2 = total

 //If the user enters 5, the program should ask for two numbers to show the first number raised to the power of the second number, and display the results.  Use the following formula along with the <cmath> library.

   //        pow(base, exponent)

 //If the user enters 6, the program should ask for one number to show the square root, and display the results.  Use the following formula: Use the following formula along with the <cmath> library.

   //        sqrt(number)

//If the user enters 7, the program should ask for the radius of the circle and then display its area.  Use the following formula:

  //         Area = PI* r2

    //      Use 3.14159 for PI and the radius of the circle for r.

 //If the user enters 8, the program should ask for the length and width of the rectangle and then display the rectangle’s area.  Use the following formula:

   //       Area = length * width

 //If the user enters 9  the program should ask for the length of the triangle’s base and its height, and then display its area.  Use the following formula:

   //         Area = base * height * .5



 Input Validation:  Display an error message if the user enters a number outside the range of 1 through 10 when selecting an item from the menu
*/

//Yamil Kas-Danouche
//10/01/2020
// This program was made with the intentions of making a calculator as the text above stated, and study how a calculator works inside in
//terms of the commands used to make it work.
#include <iostream>
#include <cmath>    // for pow() function
using namespace std;
int main()
{
    const float PI = 3.14159;
    int user_choice;
    char x;
do
{



    cout << "\nGeometry Calculator\n"
        << "   1. Add\n"
        << "   2. Substract\n"
        << "   3. Multiply\n"
        << "   4. Divide\n"
        << "   5. Raise to the power\n"
        << "   6. Square root\n"
         << "   7. Calculate the Area of a Cricle\n"
         << "   8. Calculate the Area of a Rectangle\n"
         << "   9. Calculate the Area of a Triangle\n"
         << "\nEnter you choice (1-10): ";
    cin >> user_choice;




    switch (user_choice)
    {

        float area,number1,number2,total,base;
        case 1:
            cout <<"what is the number 1:" << endl;
            cin >> number1;
            cout << " what is number 2:" << endl;
            cin >> number2;
            total = number1+number2;
            cout << "total : " << total << endl;
             cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;
        case 2:
            cout <<"what is the number 1:" << endl;
            cin >> number1;
            cout << " what is number 2:" << endl;
            cin >> number2;
            total = number1-number2;
            cout << "total : " << total << endl;
            cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;

        case 3:
            cout <<"what is the number 1:" << endl;
            cin >> number1;
            cout << " what is number 2:" << endl;
            cin >> number2;
            total = number1*number2;
            cout << "total : " << total << endl;
            cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;

        case 4:
            cout <<"what is the number 1:" << endl;
            cin >> number1;
            cout << " what is number 2:" << endl;
            cin >> number2;
            total = number1/number2;
            cout << "total : " << total << endl;
            cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;

        case 5:
            float exponent;
            cout << "Enter base number" << endl;
            cin >> base;
            cout << " Enter exponent" << endl;
            cin >> exponent;
            total = pow(base,exponent);
            cout << "total : " << total << endl;
            cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;

        case 6:
            cout << "enter number" << endl;
            cin >> number1;
            if (number1 < 0)
                {
                    cout << "We're sorry. \nThe number 1 must be "
                        << "a positive number.\n"
                        << "Rerun the program and try again.\n"
                        << endl;
                }
            else
                {
                    total = sqrt(number1);
                cout << "total : " << total << endl;

                }
                cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;


        case 7:
            int radius;

            cout << "What is the radius: ";
            cin >> radius;

            if (radius < 0)
            {
                cout << "We're sorry. \nThe radius must be "
                     << "a positive number.\n"
                     << "Rerun the program and try again.\n"
                     << endl;
            }
            else
            {
                area = PI * pow(radius, 2);

                cout << "The area of the circle is  "
                     <<  area << endl;
            }
            cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;


        case 8:
            float width, length;

            cout << "What is the length? " << endl;
            cin >> length;

            if (length > 0)
            {
                cout << "What is the width? " << endl;
                cin >> width;

                if (width > 0) {
                    area = length * width;
                    cout << "The area of rectangle is "
                         << area
                         << endl;
                }
                else {
                    cout << "\nWe're sorry. \nWidth must be greater than 0."
                    << endl;
                    cout << "Rerun the program and try again." << endl;
                }

            }
            else
            {
                cout << "\nWe're sorry. \nLength must be greater that 0." << endl;
                cout << "Rerun the program and try again." << endl;
            }

            cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;
        case 9:
            float height;

            cout << "What is base base? ";
            cin >> base;

            if (base > 0)
            {
                cout << "What is the height? ";
                cin >> height;

                if (height > 0)
                {
                    area = (base * height) * .5;
                    cout << "Area of triangle is "
                         << area
                         << endl;
                }
                else
                {
                    cout << "\nWe're sorry. \nHeight must "
                         << " be greater than 0.\n"
                         << "Rerun the program and "
                         << "try again."
                         << endl;
                }


            }
            else
            {
                cout << "\nWe're sorry. \nBase length must"
                     << " be greater than 0.\n"
                     << "Rerun the program and try again." << endl;
            }
            cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;
        default:
    cout << "Error, enter a number from 1 to 10" << endl;
    cout <<"wanna try it again? (Y/N)" << endl;
            cin >> x;
            break;

    }
}
while (x== 'y'||x=='Y');
return 0;
}
