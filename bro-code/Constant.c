#include <stdio.h>

int main(){

    // constant = fixed value that cannot be altered by the program during it's execution
    //(to prevent a varible or a value from being changed we can turn that variable into a 'constant')

    const float PI = 3.14159;
    //Althoug it is not neccesory, common naming convention with constant is that you make the all letters in uppercase.

    /*
    //let's see what happen when you try to assing another value to a constant
    PI = 2.44;
    //it will show "error: assignment of read-only variable ‘PI’ " 
    */

    printf("This is a constant: %.3f",PI);
    return 0;

}