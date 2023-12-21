#include <stdio.h>

int main()
{
    double prices[] = {23.4,12.5,56.12,89.22,45.4};

    printf("\nTotal size of the array in bytes : %d\n",sizeof(prices)); // sizeof operator returns the size in bytes

    for (int x = 0; x < sizeof(prices) / sizeof(prices[0]) ; x++) 
    //# to get the lenght of the list , we have to do some complicated stuff,
    //# 'sezeof(prices)' take the whole size of the array 
    //(size of a double value is 8, there are 5 items in the array so 8x5 = 40).
    //# then array size is divided by the size of a one item in the list (40 / 8 = 5) and the final outcome is 5   
    {
        printf("\n%.2lf", prices[x]);
    }
    return 0;
}

// sizeof() returns the size in bytes 