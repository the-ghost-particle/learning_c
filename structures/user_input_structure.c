#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personal_records
{
	char name[20];
	int age;
	char id[10];
	float gpa;
	
};

void getInput(struct personal_records *pers)
{
	printf("ID : ");
	scanf("%d", &pers->id);
}

void main()
{

	struct personal_records person[10];
	int count = 0;
	char choice;

	do
	{
		printf("\nEnter details of the student no: %d", count +1);
		getInput(&person[count]);	
	}

}//eo main::






























