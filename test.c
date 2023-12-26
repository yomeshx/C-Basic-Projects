#include <stdio.h>

int main()
{
	double array [] = {12.5,34.55,17.4,999.6,45.3};

//	printf("\n%d",sizeof(array));

//	printf("\n%.2lf",array[2]);
	
	for (int x=0; x< sizeof(array)/sizeof(array[1]); x++)
	{
		printf("\n%.2lf",array[x]);
	}


	return 0;
}
