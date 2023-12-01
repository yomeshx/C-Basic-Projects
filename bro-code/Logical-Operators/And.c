
// Logical Operator && (AND) chaecks if two conditions are true

#include <stdio.h>
#include <stdbool.h>

int main(){

    float temp = 26 ;   // make changes to see different outputs
    bool sunny = false; // make changes to see different outputs

    if (temp > 0 && temp < 30 && sunny){    // sunny == true ,sunny == 1, sunny  . are the same
        printf("\nNice whether today !");
    }
    else{
        printf("\nBad whether today ,don't go outside!");
    
    }
    


    return 0;
}