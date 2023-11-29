#include <stdio.h>

int main(){

    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if (age>18){
        printf("%d is in the required age range.",age);
    }
    else if(age==18){
        printf("18 is also acceptable.",age);
    }
    else{
        printf("%d is not in the proper age range.",age);
    }

    return 0;
}