// To create a program to calculate the area of a rectangle by taking the user input //

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{       
        // Declaring all the variables 
	double width;
	double height;
	double perimeter;
	double area;
	
	// Taking the users input for height
	printf("Enter the value of height: ");            
	scanf("%lf", &width);            
	
	// Taking the users input for width
	printf("Enter the value of width: ");
	scanf("%lf", &height);
	
	// Calculating the perimeter and area of raectangle
	perimeter = 2.0 * (height + width);
	area = width * height;
	
	printf("--------------------------------------------\n");
	
	// Printing the final output of calculated area and perimeter of recatngle
	printf("Perimeter is = %lf\n",perimeter);
	printf("Area is = %lf\n",area);
	
	return 0;
}	
