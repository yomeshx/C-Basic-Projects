#include <stdio.h>

// Augmented-assignment = operators takes the variable and change it and assign the new value to the same variable
// work the same as incremnt(++) or decrement(--) operators.

//Example:
    // normal way to increase the value: x = x+1
    // using Augmented-assignment        x+=1

// you see, it basically a shortcut

int main(){
    int x = 4;
    int y = 2;
    int z = 5;
    int w = 18;
    int h = 7;

    // x = x + 1
    x+=1;

    // y = y - 1
    y-=1;

    // z = z * 4
    z*=4; 

    // w = w / 6
    w/=6;

    // h = h % 3
    h%=3;


//-------------------------------------------------------------------------------------------------------------------------------------------------------
    printf("%d",x);
    printf("\n");

    printf("%d",y);
    printf("\n");
    
    printf("%d",z);
    printf("\n");

    printf("%d",w);
    printf("\n");

    printf("%d",h);
    printf("\n");

    return 0;
}