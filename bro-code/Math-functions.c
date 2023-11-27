//To use math funtions in C , you need to include <math.h> header file.

#include <math.h>
#include <stdio.h>

int main(){

    double A = sqrt(9); // Squar root of 9
    double B = pow(2,4); // pow(base,power) in this case it's base 2 to the power 4
    int C = round(3.14); // round the number
    int D = ceil(3.14); // round the number up
    int E = floor(3.99); // round the number down
    double F = fabs(-100); // absolute value of a number, means how far away the is from 0. (basically it takes negative values and returns positive value)
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("SQUARE ROOT : %lf \n",A);
    printf("Power : %lf \n",B);
    printf("Round : %d \n",C);
    printf("Ceil : %d \n",D);
    printf("Floor : %d \n",E);
    printf("Fabs : %lf \n",F);
    printf("Logarithms : %lf \n",G);
    printf("Sin : %lf\n",H);
    printf("Cos : %lf\n",I);
    printf("Tan : %lf\n",J);

    return 0;
}