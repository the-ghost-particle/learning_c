#include <string.h>
#include <stdio.h>


void main()
{
	int x = 10;
	int *p = &x;

	printf("value of (x): %d\n", x); 	//prints the value of x
	printf("address of x (p): %p\n", p);	//prints the address of x (saved in pointer p)
	printf("the value at the address (*p): %d\n", *p);	//prints the value at the address
	printf("address of the pointer (&p): %p\n", &p);	//prints the address of the pointer p
	printf("\n");

	*p = 50;
	printf("*p: %d\n", *p);


}
