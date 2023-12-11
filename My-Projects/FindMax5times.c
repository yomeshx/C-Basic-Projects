#include <stdio.h>
int max(int,int); // function prototype

int main()
{
	int num1;
	int num2;

	for(int i =1; i<=5; i++) // For loop to iterate 5 times
	{

		printf("\nEnter First Number: ");
		scanf("%d",&num1);

		printf("Enter Second Number: ");
		scanf("%d",&num2);
	
		int maxno =max(num1,num2);
		printf("Max : %d",maxno);
		printf("\n\n");
	}
	return 0;
}

int max(int num1,int num2)	// Funtion to Find Max
{
	return(num1>num2) ? num1 : num2 ;
}
