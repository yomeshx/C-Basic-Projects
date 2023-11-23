// Been bussy ,Learned about Format specifiers,Datatypes,Constants,Operators,and how to take User Inputs

#include <stdio.h>
#include <string.h>
int main(){

    char game[20];
    printf("Tell me what was your favorite game back in the day : ");
    scanf("%s",&game);
    getchar();// consumes the new line
    char name[20];
    printf("What is your full name : ");
    fgets(name,20,stdin);
    name[strlen(name)-1] = '\0';
    printf("%s is from Kurunegala ,and his favorite video game is %s. He has 6 cats and 1 dog.",name,game);


    return 0;
}
