#include <string.h>
#include <stdio.h>


void main()
{
	int x = 10;
	int *p = &x;

	printf("x: %d\n", x); 	//prints the value of x
	printf("p: %p\n", p);	//prints the address of x (saved in pointer p)
	printf("*p: %d\n", *p);	//prints the value at the address
	printf("&p: %p\n", &p);	//prints the address of the pointer p
	printf("\n");

	*p = 50;
	printf("*p: %d\n", *p);


}
