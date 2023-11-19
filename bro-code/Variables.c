/* Variable - Allocated space in memory to store a vlaue.
              We refer to a variable's name to access the stored value.
              That variable now behave as if it was the value it contains.
              But we need to declare what type of data we are storing.

    Overview: This note more about understanding variables 
    and we also briefly talk about other topics like data types and format specifiers.

*/
#include <stdio.h>
int main(){
    // crating and storing a variable takes 2 steps.
    int x; //declaration
    x = 123; //initialization

    int y = 123; // declaration + Initialization

    //we can create variables using different datatypes
    int age = 22;          // integer
    float gpa = 2.05;       // floating point number(float)
    char grade = 'C';       // Single character(Note: Must use singe quotes('') )
    //Note: C is not a OOP language , so there is no string variables. Strings are technically objects
    // so if we need to store something like somebody's name, we need series of characters to be stored in form of an Array
    char name[] = "yomesh"; // Array of characters (Note: Must place characters withing double quotes(""))

    // Using Format specifiers to print variables with different types of values
    printf("My name is %s.\n",name);          // '%s' Represents a string of characters
    printf("I am %d years old now\n",age);    // '%d' Represents a decimal integer
    printf("My GPA for BSE is %f\n",gpa);     // '%f' Represents a float
    printf("And My grade is %c\n",grade);     // '%c' Represents a character
    return 0;
}