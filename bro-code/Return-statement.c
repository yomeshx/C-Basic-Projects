// Return statement in a funtion returns the end result of the funtion
// you need to specify the data type of the return value when declairing a function. 
// data type comes before  the funtion name
#include <stdio.h>

double square(double value) // squar function is a double, parameter this function takes is also double.
{
	double sqr = value * value;
	return sqr;
}
int main()
{
	double squarfind = square(5.00);
	printf("Square is : %lf ",squarfind);

	return 0;
}
