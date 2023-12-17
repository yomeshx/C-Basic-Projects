// Continue = Skips the rest of the code and forces the next iteration of the loop

#include <stdio.h>

int main()
{
    for (int i=1 ; i<=20 ; i++)
    {
       if (i == 5)
       {
            printf("-------------------> || Note there's no '5' ||\n");
            continue;
       }
       else
       {
            printf("Value : %d\n",i);
       }
    }
    return 0;
}

// Idea is to iterate and print each value for i from 1 to 20 , 
//but if i == 5 it won't execute the code and skip to the next iteration.