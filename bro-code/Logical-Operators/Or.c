
// OR || logical operator checks if atlest one condition is true

#include <stdio.h>

float temp = 29; // make chages to temp value to see the different outputs


int main(){

    if (temp < 0 || temp >= 30){
        printf("Bad whether !");
    }
    else{
        printf("Nice whether !");
    }
        

    return 0;
}