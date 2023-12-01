// Not '!' Logical operator reverses the state of a condition

#include <stdio.h>
#include <stdbool.h>

int main(){

    bool sunny = true; // try changin to true / false to see different outputs


    if (!sunny){         // checkin if rain "not true"(false)
        printf("It's cloudy outside !");
    }
    else{
        printf("It's sunny today !");
    }
    return 0;
}