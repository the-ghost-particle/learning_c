#include <stdio.h>
#include <stdbool.h>

#define true 1
#define false 0
void add_values(int *one, int *two)
{
	int sum = 0;
	int next_check = false;
	printf("The sum is: %d\n", sum = *one+*two);
	printf("Do you want to change the values?");
	scanf("%d", &next_check);

	if(next_check == true)
	{
				
		printf("Enter the first value: "); 
		scanf("%d", one);  
	
		printf("Enter the second value: "); 
		scanf("%d", two);
		
		printf("The sum is: %d\n", sum = *one+*two);
	}

}//::eo add_values

int main()
{
	int first_var, second_var;
	
	printf("Enter the first value: "); 
	scanf("%d", &first_var);  
	
	printf("Enter the second value: "); 
	scanf("%d", &second_var);

	add_values(&first_var,&second_var);

	printf("Input values are: %d & %d\n", first_var, second_var);

	return 0;
}//::eo main
