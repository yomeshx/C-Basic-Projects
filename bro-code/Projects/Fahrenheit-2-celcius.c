#include <stdio.h>
#include <ctype.h> // contains helpfull string functions

int main(){

    char unit;
    float temp;

    printf("\nTemperature Unit ? (C or F) : ");
    scanf("%c",&unit);

    unit = toupper(unit);   // C programms are case sensitive
                            // so we made it uppercase using 'toupper' funtion from ctype header 
    if(unit == 'C'){
        printf("\nEnter temperature value in Celcius : ");
        scanf("%f",&temp);
        float f = (temp * 9 / 5)+32 ;   // you can re-assign to the temp variable if you want, then you don't have to say float at the beggining because it's already a float
                                        // since i am creating new variable named 'f' i need to explicitly say it's format   
        printf("\n%.2f Celcius ---> Fahrenheit : %.2f ",temp,f);
    }
    else if(unit == 'F'){
        printf("\nEnter temperature value in Fahrenheit : ");
        scanf("%f",&temp);
        float c = ((temp - 32) *5)/9 ;  //converting fahrenheit to Celcius 
        printf("\n%.2f Fahrenheit ---> Celcius : %.2f ",temp,c);
    }
    else{
        printf("\n%c is not an acceptable Unit.",unit);
    }

    return 0;
}