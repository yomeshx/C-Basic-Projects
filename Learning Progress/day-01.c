/*
Today(19th nov 2023) I wrote my first C program hello world .
and learnt about comments,Escape sequence and Variables. 
furthermore learned little bit about datatypes in C and Format specifiers. 
but will hope to explore more about those two topics in the near future 
*/

// Self Assignment to summertize everything learned today

#include <stdio.h>
int main(){
    char name[]="Wanindu Hasaranga";
    int age = 31;
    float avg = 4.2;
    char category = 'B';

    printf("%s is a good baller and he is %d years old\n",name,age);
    printf("His average is %f ,and in %c category",avg,category);
    return 0;
}