// When there's a loop inside a loop that called a nested loop
// To complete one iteration of the outerloop, you have to first escape the inner loop.and that may involve completing all the iterations of the innerloop.

#include <stdio.h>

int main()
{
	int rows;
	int clms;
	char symbol;

	printf("\nEnter Rows: ");
	scanf("%d",&rows);
	
	printf("\nEnter Columns: ");
	scanf("%d",&clms);

	printf("\nEnter the symbol: ");
	scanf(" %c",&symbol); // Note : %c may consume newline character from previous scanf.
			      // To fix this issue, you can add a space before %c in the scanf function for reading the symbol.
			      // This space character tells scanf to skip any whitespace characters, including the newline character, before reading the actual character.

	//scanf("c");	     // Or you can write another scanf without assigning it to a variable to achive the same solution above 
	
	printf("\n");

	for (int x = 1; x<= rows; x++)
	{
		for (int y=1 ; y<=clms; y++)
		{
			printf("%c",symbol);
		}
		printf("\n");
	}
	return 0;
}

//This program Print rectangle shape with symbol you entered
