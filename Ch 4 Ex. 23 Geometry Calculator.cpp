/* File Name: Chapter 4 - Geometry Calculator 
* Programmer: Philip Rodgers
* Date: September 2025
* Requirements: 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int choice;

		cout << "Geometry Calculator" << endl;
		cout << setw(36) << "1. Calculate the Area of a Circle" << endl;
		cout << setw(39) << "2. Calculate the Area of a Rectangle" << endl;
		cout << setw (38) << "3. Calculate the Area of a Triangle" << endl;
		cout << setw (10) << "4. Quit" << endl;
		cout << setw(26) << "Enter you choice (1-4):" << endl;
		cin >> choice;
	
	switch (choice)
	{
		case 1: cout << "What's the radius of the circle? ";
			double radius, areac;
			cin >> radius;
			if (radius > 0)
			{
				areac = 3.14159 * (pow(radius, 2.0));
				cout << "The radius of the circle is " << areac << endl;
			}
			else
			{
				cout << "Please enter a positive number for the radius.\n";
			}
			break;

		case 2: cout << "What's the length of the rectangle? ";
			double length, width, arear;
			cin >> length;
			cout << "What's the width of the rectangle? ";
			cin >> width;
			if (length > 0 && width > 0)
			{
				arear = length * width;
				cout << "The area of the rectangle is " << arear << endl;
			}
			else
			{
				cout << "Please enter a positive number for both the length and width.\n";
			}
			break;

		case 3: cout << "What's the length of the triangle's base? ";
			double base, height, areat;
			cin >> base;
			cout << "What's the height of the triangle? ";
			cin >> height;
			if (base > 0 && height > 0)
			{
				areat = base * height * .5;
				cout << "The area of the triangle is " << areat << endl;
			}
			else 
			{
				cout << "Please enter a positive number for both the base and height.\n";
			}
			break;

		case 4: cout << "Quitting Program";
			break;

		default: cout << "You did not enter a number in the range of 1-4. "
						 "Please try again and enter a number in the range of 1 - 4.";

	}

} 


