#include <stdio.h>

int main()
{
	for (int x = 1; x <=10 ; x++)
	{
		if (x == 6)
		{
			printf("\noh six is not valid");
			continue;
		}
		printf("\n%d",x);
		
	}
	return 0;
}