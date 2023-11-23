#include <stdio.h>

int main(){

    char name[20];
    printf("Name Please : ");
    fgets(name,20,stdin);
    printf("His name is %s",name);

    return 0;
}