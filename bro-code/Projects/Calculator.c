#include <stdio.h>

int main(){

    char operator;
    double number1;
    double number2;
    double result;

    printf("\nWhat is the operator (+,-,*,/) : ");
    scanf("%c",&operator);

    printf("\nEnter First Value : ");
    scanf("%lf",&number1);

    printf("\nEnter Second Value : ");
    scanf("%lf",&number2);

    switch(operator){

        case '+':
            result = number1 + number2;
            printf("\n%.2lf + %.2lf = %.2lf" ,number1,number2,result);
            break;
        case '-':
            result = number1 - number2;
            printf("\n%.2lf - %.2lf = %.2lf",number1,number2,result);
            break;
        case '*':
            result = number1 * number2;
            printf("\n%.2lf * %.2lf = %.2lf",number1,number2,result);
            break;
        case '/':
            result = number1 / number2;
            printf("\n%.2lf / %.2lf = %.2lf",number1,number2,result);
            break;
        default:
            printf("'%c' is not a valid operator.");
    }
    return 0;
}