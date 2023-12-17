// Array = A data structure that can store many values of the same data type

#include <stdio.h>

int main()
{
    double prices[] = {20.23,14.2,45.34,200.23,300};
//index -->              0     1     2     3     4

    printf("\nPrice : %.2lf",prices[3]); // when accessing a value that is inside of a array , we need to specify the index
    printf("\nPrice : %.2lf",prices[0]);
    printf("\nPrice : %.2lf",prices[4]);
    printf("\n\n\n");

// We can also create arrays without giving any values righaway or with some values but wish to add some more later.
// Should specify how many elements array stores inside the square brackets  ,ex: [10]

    double temp_readings[20]; // this array can have 20 elements/values

    temp_readings[0] = 123.20; // adding values to "temp_readings" array
    temp_readings[1] = 23;
    temp_readings[2] = 250.2;
    temp_readings[3] = 173.30;
    temp_readings[4] = 7703.5;

    printf("\n Temparature : %.2lf",temp_readings[0]);
    printf("\n Temparature : %.2lf",temp_readings[1]);
    printf("\n Temparature : %.2lf",temp_readings[2]);
    printf("\n Temparature : %.2lf",temp_readings[3]);
    printf("\n Temparature : %.2lf",temp_readings[4]);
    printf("\n\n\n");

    double coordinates[10] = {23.44,12.22}; // example with array wiht some values but can add more if want

    coordinates[2] = 34.22;
    coordinates[3] = 100;
    coordinates[4] = 87.35;
    coordinates[5] = 367.52;

    printf("\n Coordinates : %.2lf",coordinates[2]);
    printf("\n Coordinates : %.2lf",coordinates[3]);
    printf("\n Coordinates : %.2lf",coordinates[4]);
    printf("\n Coordinates : %.2lf",coordinates[5]);

    return 0;
}
