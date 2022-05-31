// C program to display the byte size of basic data types //

#include<stdio.h>

int main()
{
	// Declaring all the data types
	
	int a;
	char b;
	long c;
	long long d;
	double e;
	long double f;
	
	// Printing the size of all the respective data types using sizeof // 
	
	printf("THe size of int is = %d\n", sizeof(a));
	printf("THe size of char is = %d\n", sizeof(b));
	printf("THe size of long is = %d\n", sizeof(c));
	printf("THe size of long long is = %d\n", sizeof(d));
	printf("THe size of double is = %d\n", sizeof(e));
	printf("THe size of long double is = %d\n", sizeof(f));
	
	return 0;
}	
	
	
