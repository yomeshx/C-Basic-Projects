#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';           // single character     %c 
    char b[] = "Tommy";     //  array of characters %s

    float c = 3.141592;     // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision(means double in precision compared to float)) 15 - 16 digits %lf
    //most programmers use double all the time instead of float because precision is important
    //when using or printing these variables you can specify how many digits you want after your decimal by %0.15f (for float 15 digits) and %0.15lf (for double 15 digits) look at the printf for this at the bottom

    bool e = true;          // 1 byte ((1)true or (0)false) %d      //by default it's 1 and 0 but you can change it to display true or false if you want
    // you need #include <stdbool.h> to use bool in C

    char f = 100;           // 1 byte (-128 to +127) %d or %c
    //you can store integer from -128 to 127 or use it to represent ASCII character

    unsigned char g = 101;  // 1 byte (0 to +255) %d or %c
    ////you can store integer from 0 to +255 or use it to represent ASCII character
    //unsigned char stores non negative values , it effectively doubles the range of positive numbers normal char can store
    //if you go beyond maximum range (more than 255) you encounter an overflow, it will reset back to 0

    //note that some data types like 'char' is signed by default so you don't need to explicitly say 'signed char' to store negative values 


    short int h = 32767;    // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;   // 2 bytes (0 to +65,535) %d
    //if you go beyond the maximum range you will encounter an overflow and it will reset to the minimum value.    
    //Note: most people dont write these as 'short int' and 'unsigned short int' they just write 'short' and 'unsigned short' both are the same thing
    
    int j = 2147483647;     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295L;   // 4 bytes (0 to +4,294,967,295) %u
    //if you go beyond maximum range you will encounter and overflow and reset back to the minimum value.
    //Note: We use %u format specifier for unsigned int unlike all the others

    long long int l = 9223372036854775807;              // 8 bytes (-9 quintillion to +9 quintillion)    %lld
    unsigned long long int m = 18446744073709551615U;   // 8 bytes (0 to +18 quintillion)               %llu
    //Note: when printing unsigned long long int you may get a warning saying it is too long , you can put 'U' at the end of the value to avoid that warning. 
    //Reason we say 'long long int' twice is because 'int' is the 'long int' by defalu (int and long int is the same thing)

    


    printf("%c\n", a);  // char

    printf("%s\n", b);  // character array

    printf("%0.15f\n", c);  // float

    printf("%0.15lf\n", d); // double

    printf("%d\n", e);  // bool

    printf("%d\n", f);  // char as numeric value
    printf("%c\n", f);  // char as numeric value to print a ASCII character 

    printf("%d\n", g);  // unsigned char as numeric value
    printf("%c\n", g);  // unsigned char as numeric value to print a ASCII character 

    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short:

    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int

    printf("%lld\n", l); // long long int
    printf("%llu\n", m); // unsigned long long int
    return 0;
}