//Calculating the Circumference of a Circle Using C

#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius ;
    double circumference;
    double area;

    printf("<--- Circumference & Area Calculator --->\n  radius : ");

    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Circumference : %lf",circumference);
    printf("\nArea : %lf",area);

    return 0;
}