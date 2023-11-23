#include <stdio.h>

int main(){

/*
    arithmetic operators

    +  (addition)
    -  (substraction)
    *  (mutiplication)
    /  (division)
    %  (modulus)    - gives remainder of anu division (pretty helpfull in cases like identifying odd,even numbers)
    ++ (increment)  -usefull in loops
    -- (decrement)

*/

    int x = 5;
    int y = 2;

    int z = x+y;

                // 'integer division in C' - You should be aware of few things when dividing integers
    
    int a = x / y; //you expect it to show result in decimals but because we are storing our value inside of an integer variable ,assigned value also will be an interger (whole number).
    
    //you should use float or double as data type if you want output of a interger devision as decimals value. also the divicer should be or converted to float or double as well.

    float b = x / y ; //note when you print b eventhoug the b data type is float, it shows the wrong result as 2.000000 .
    //you need to convert int diviser as well to float or double(in this case y) to store correct float or double value inside "b".
    float c = x / (float)y;



    int d = x % y;


    int k = 5;
    k++; // k increment by 1

    int v = 3;
    v--; // v decrement by 1

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------    
    printf("%d",z); // addition
    printf("\n");
 
                // integer division
    printf("%d",a);
    printf("\n");
    printf("%f",b);
    printf("\n");
    printf("%f",c);
    printf("\n");
    
    printf("%d",d); //modulus
    printf("\n");
    
                //increment decrement
    printf("%d",k); // increment
    printf("\n");
    printf("%d",v); // decrement
    printf("\n");

    return 0;
}