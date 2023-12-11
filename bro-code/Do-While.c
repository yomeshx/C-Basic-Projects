// While Loop - Checks a condition, then execute a block of code if condition is true over and over until it become false (never gets excuted if the condition is false)
// Do While - Always executes the block of code once ,then checks a condition


#include <stdio.h>

int main()
{
	int number =0;
	int total = 0;

	do{	
		printf("Enter a Number : ");
		scanf("%d",&number);
		if (number >0)
		{
			total +=number;
		}		
	}while (number>0);

	printf("Total = %d",total);

	return 0;
}
// This program add all the inputs to the total until 0 or negative number entered.
