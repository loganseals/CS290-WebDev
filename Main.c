/*********************************************************************************************
* Author: Richard Logan Seals
* Date Created: 1/7/2019
* Last Modified: 1/8/2019
* Filename: Main.c
* Description: This file will take the length of three sides of a triangle, calcate the
*		area of the triangle using Heron's formula, and display the area of the triangle.
*/

#include "stdio.h"
#include "math.h"

// define the functions used in the program
double Semiperimeter(double a, double b, double c);
double Area(double a, double b, double c);

int main(int argc, char **argv)
{
	// define and initialize the variables for the lengths of the three sides
	double sideA = 2.34, 
		   sideB = 4.98, 
		   sideC = 7.15;

	// print the functions of the program and the length of the sides to the user
	printf("This program calculates the area of a triangle given\nthe length of the triangle's sides.\n\n");
	printf("The length of side 'a' is: %f", sideA);
	printf("\nThe length of side 'b' is: %f", sideB);
	printf("\nThe length of side 'c' is: %f", sideC);

	// define variable to hold the area of the triangle and call the Area() function
	double triangleArea = Area(sideA, sideB, sideC);

	// print the are of the triangle to the user
	printf("\n \nThe area of the triangle is %f. \n", triangleArea);

	return 0;
}

// This function is used to calculate the semiperimeter of a triangle. It follows
// the formula of Semiperimeter = (a+b+c) / 2, where a, b, and c are the lengths of
// the sides of the triangle. The function takes in three doubles as the lengths 
// of the sides of a triangle and returns a double.
double Semiperimeter(double a, double b, double c)
{
	return (a + b + c) / 2;
}

// This function is used to calculate the area of a triangle. It follows the formula
// of Area = sqrt(s *(s-a) *(s-b) *(s-c)), where s is the semiperimeter of the triangle,
// and a, b, and c are the lengths of the sides of the triangle.
double Area(double a, double b, double c)
{
	// calculate the semiperimeter of the triangle using the Semiperimeter function
	double s = Semiperimeter(a, b, c);
	// return the area of the triangle
	return sqrt(s * (s - a) * (s - b) * (s - c));
}