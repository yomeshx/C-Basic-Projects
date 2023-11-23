#include <stdio.h>

int main(){

    // Format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimal field width (at minimum how much space worth of room to display the output)
    // %- = left align


    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%f\n",item1);
    printf("Item 1: $%.2f\n",item1);
    printf("Item 1: $%8.2f\n",item1);
    printf("Item 1: $%-8.2f\n",item1);

    printf("\n");

    printf("Item 2: $%f\n",item2);
    printf("Item 2: $%.2f\n",item2);
    printf("Item 2: $%8.2f\n",item2);
    printf("Item 2: $%-8.2f\n",item2);

    printf("\n");

    printf("Item 3: $%f\n",item3);
    printf("Item 3: $%.2f\n",item3);
    printf("Item 3: $%8.2f\n",item3);
    printf("Item 3: $%-8.2f\n",item3);

    return 0;
}