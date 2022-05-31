// C program to calculate your weekly pay //

#include<stdio.h>
#include<stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .25
#define TAXRATE_REST .25
#define OVERTIME 40


int main()
{
	int hours;
	double taxes = 0.00;
	double grosspay = 0.00;
	int netpay = 0.00;
	
	printf("Enter the number of hours worked");
	scanf("%d", &hours);
	
	if(hours <= 40)
	{
		grosspay = hours * PAYRATE;
	else
	{
		grosspay = 40 * PAYRATE;
			
		
	
