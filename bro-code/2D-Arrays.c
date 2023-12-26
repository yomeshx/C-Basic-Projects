// 2D array = an array, where each element is an entire array.
//	      useful if you need a matrix, grid, or table of data


#include <stdio.h>

int main()
{
	//METHOD 01 - When know all the details (number of rows and columns) of the array
/*

	int numbers[2][3] = {
				{1,2,3},
				{4,5,6}
			    };
	   //first [] is "maximum number of rows". maximum nuber of arrays withing your 2D array(not neccesary to put a value inside this bracket)
	   //second [] is "maximum number of columns" the maximum size of the elemnts per array in this case there are 3 elements in every array (unlike first bracket , in second bracket it is neccesary to give a value to define size of element of inside all arrays)

*/
	//METHOD 02 - When you may need to add in some more stuff later

//remember it's neccesary to define the size of the arrays(second [] bracket) doesn't matter if it's method 1 or 2 

	int numbers[2][3];

	numbers[0][0] = 1; // value of the 0 th row of the 0 th column is 1 (row are the arrays , columns are the value inside the arrays )
	numbers[0][1] = 2;
	numbers[0][2] = 3;
	numbers[1][0] = 4;
	numbers[1][1] = 5;
	numbers[1][2] = 6;
 
 
//now we learnt two ways to create 2D arrays above. now lets print values of a 2D array using a for loop ,to do that we need a nested loop 


	// When you know exact size rows(arrays) and columns (number of values)

/*

	for (int i =0; i < 2; i++) // i < 2 because of 2 rows
	{
		for (int j = 0; j < 3; j++) // i < 3 becuase 3 columns
		{
			printf("%d ", numbers[i][j]);
		}
		printf("\n");
	} 

*/

	// when you don't really know the exact number of rows and columns of the 2D array gonna be. 
	
	int rows = sizeof(numbers)/sizeof(numbers[0]); //Entire size of our 2D array is divided by size of one of our rows
	int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

	printf("rows: %d\n",rows); // for testing purposes
	printf("columns: %d\n",columns);

        for (int i =0; i < rows; i++) // i < 2 is replaced by i < rows 
        {       
                 for (int j = 0; j < columns; j++) // j < 3 is replaced by j < columns
                 {       
                          printf("%d ", numbers[i][j]);
                 }
                 printf("\n");
        }




	return 0;
}
