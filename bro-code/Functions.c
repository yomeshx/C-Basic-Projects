// Block of code that most likely get used more than onece can be stored in a funtion so don't have to copy and paste,and it makes your code look more cleaner 
// that block of code get executed whenever you call/invoke it.
#include <stdio.h>

void greeting()
{
    printf("Ayubowan!\n");
    printf("Ayubowan!\n");
}

int main()
{
    greeting();
return 0;
}