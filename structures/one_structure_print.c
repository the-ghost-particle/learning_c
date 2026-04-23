#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

struct record {
	int id;
	char name[80];

};

void printStructure(struct record r);

void main()
{
	int fd, size = sizeof(struct record);
	struct record info;

	info.id = 100;
       	strcpy(info.name, "test_name");

	printStructure(info);
}// end of main::

void printStructure(struct record r)
{
	printf("---RECORDS---\n");
	printf("\tID: %d\n", r.id);
	printf("\tNAME: %s\n", r.name);
	printf("---END RECORDS --- \n");
}// end of printStructure::
