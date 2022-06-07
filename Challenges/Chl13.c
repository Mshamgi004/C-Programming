// Task 2
// Create a C program to copy structure into array with and without pragma packing

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

struct Person
{
	char name[10];
	int age;
};

int main()
{
	//structure variable declaration with initialisation
	struct Person person = {"abcd"};
	
	//declare character buffer (byte array)
	int i;
	unsigned char *buffer = (char*)malloc(sizeof(person));
	
	// use of memcpy 
	memcpy(buffer,(const unsigned char*)&person,sizeof(person));
	
	// printing the copied data
	printf("Copied byte of array is:\n");
	
	for(i=0; i < sizeof(person); i++)
	{
		printf("%d ",buffer[i]);
	}	
	printf("\n");
	printf("size of structure is %d",sizeof(person));
	
	//freeing memory..
	free(buffer);
	return 0;
}





