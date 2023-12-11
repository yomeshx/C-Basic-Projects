// When assigning/returning a value, Ternary operator is a shortcut for if else statements.
// allows you to do the if else in a one single line
// (condition) ? value if true : value if false

#include <stdio.h>

int findMax(int x,int y)
{
	return (x>y) ? x : y ; // when returning
}
int main()
{
	int x ;
	int y;

	printf("\nEnter The First Number : ");
	scanf("%d",&x);
	printf("\nEnter The Second Number : ");
	scanf("%d",&y);

	int maxfinder = findMax(x,y);
	
	int minval = (maxfinder == x) ? y : x; // when assigning
	
	printf("\n | Max : %d    | Min : %d ",maxfinder,minval);

	return 0;
}
/*
//same block of code under findMax written using if else statements
//
	if (x>y)
		return x;
	
	else
		return y;	
	
*/
