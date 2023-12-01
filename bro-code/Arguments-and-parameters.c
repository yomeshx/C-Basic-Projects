#include <stdio.h>

// when you creating a funtion that reqiure parameters,
// you need to give data type before the variable names. 
// in character-arrays you need to put '[]' after the variable .

void birthday(char name[],int age)
{
    printf("Happy birthday dear %s , You are %d old now.",name,age);    
}

int main()
{
    char name[] ="Yomesh";
    int age = 22;

    birthday(name,age);
    return 0;
}