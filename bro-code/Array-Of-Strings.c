// Array of strings simply  means , strings inside of an array

#include <stdio.h>
#include <string.h>

int main()
{

	char cars[][10] = {"Mustang","Ford","BMW"}; 		// this is just like 2D arrays
		//[10] is setting the maximum size for each of these elements (strings)

	printf("\n\n%s\n",cars[1]);	//Testing - should print ford


	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");


	// Lets print all the elements inside the 'cars' using for loop


	for (int x=0; x< sizeof(cars)/sizeof(cars[0]); x++)
	{
		printf("\n%s\n",cars[x]);
	
	}

	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");



	// You can't directly change/repalce  values inside of an array of strings like this --> `cars[2] = "Corvette"`
	// first you need to include string.h header , and use strcpy to change/replace values.
	
	strcpy(cars[0],"Tesla");
	printf("\n%s\n",cars[0]);
	return 0;
}
