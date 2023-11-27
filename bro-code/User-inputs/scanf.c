#include <stdio.h>

//we need to spcify the expected input format in double quotes and then a comma and variable name with '&' character infront
// & - address
//ex: scanf("%d", &age);



//
int main(){

    // interger input
    int age; // note that we can create a variables and not assign it in C
    printf("How old are you ?  ");
    scanf("%d", &age); // Note: we are assigning user input to the variable age we created above
    printf("You are %d years old.",age);
    printf("\n");

    // array of characters
    char town[25]; // "25 bytes" is the size we gave to this array. if we go over this defined limit, it will cause a 'Buffer Overflow'  
                    //Note: with character arrays ,we can't change the size of the array after the program is already running
    printf("What is your hometown ? ");
    scanf("%s",&town);
    printf("You are from %s.",town);
    printf("\n");

}