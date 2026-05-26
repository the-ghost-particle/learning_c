#include <stdio.h>

int main()
{
	int data_value;
	int *pointer_data_value = NULL;	

	printf("Enter a value between 0-100:- ");
	scanf("%d", &data_value);

	printf("Value of the variable: %d\n", data_value);
	printf("Address of the variable: %p\n", &data_value);

	pointer_data_value = &data_value;
	printf("Pointer of data_value: %p\n", pointer_data_value);

	printf("Value inside the pointer: %d\n", *pointer_data_value);
	return 0;
}//::eo main
