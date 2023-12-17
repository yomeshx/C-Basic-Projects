// break = exits the loop/switch

#include <stdio.h>

int main()
{
    for (int i = 1 ; i <= 20 ; i++)
    {
        if (i==13){
            printf("\n\nOh no 13 is a bad number , I am gonna break out of the loop!");
            break;
        }
        else
        {
            printf("\nValue = %d",i);
        }
    }
    printf("\nRest of the code after the loop .....");

    return 0;
}

// idea is to iterate through 1 to 20 ,but if i == 13 it will break out the loop.