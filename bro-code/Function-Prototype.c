#include <stdio.h>

void greet(char[],int);

int main()
{

	char name[]="Yomesh Dissanayake";
	int age=22;

	greet(name,age);

	return 0;
}

void greet(char name[],int age)
{
	printf("\nHello %s",name);
	printf("\nYou are %d years old now\n",age);
}

// # What is a Function Prototype
//    - Function declaration without a body ,before main()
//    - Ensures that calls to a function are made with correct arguments
//
// Why we need it:
//    - Many C compilers don't check for parameter matching.
//    - So missing arguments can cause unexpected behaviour.
//    - A function prototype cause the compiler to flag an error if arguments are missing.
