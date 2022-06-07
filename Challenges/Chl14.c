#include <stdio.h>
#include <stdlib.h>


struct course 
{
	int marks;
	char subject[30];
};

int main() 
{
	struct course *ptr;
	int records;
	printf("Enter the number of records: ");
	scanf("%d", &records);

	// Memory allocation for noOfRecords structures
	ptr = (struct course *)malloc(records* sizeof(struct course));
	
	for (int i = 0; i < records; ++i) 
	{
		printf("Enter subject and marks:\n");
		scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);
	}	


	printf("Displaying Information:\n");
	for (int i = 0; i < records; ++i) 
	{
    		printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
    	}	

	free(ptr);

	return 0;
}
