// C program to convert number of minutes in years and days //

#include<stdio.h>

int main()
{       
	// Declaring all the variables 
	int minutes;
	double minutesinyear;
	int year;
	double days;
	
	// Taking the user input for minutes
	printf("Enter the no. of minutes: ");
	scanf("%d", &minutes);
	
	
	minutesinyear = (60 * 24 * 365);
	year = (int) (minutes / minutesinyear);
	
	days = (minutes / 60.0) / 24.0;
	
	printf("%d minutes is approxmiately %f years and %f days\n", minutes, year);
	
	return 0;
}	
	
	
	
	
	
	
