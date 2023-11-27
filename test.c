#include <math.h>
#include <stdio.h>

int main(){

    double base;
    double power;


    printf("Enter value for the base : ");
    scanf("%lf",&base);
    printf("\nEnter value for the power : ");
    scanf("%lf",&power);
    double reslt = pow(base,power);
    printf("\nResult : %lf",reslt);

    

    return 0;
}
