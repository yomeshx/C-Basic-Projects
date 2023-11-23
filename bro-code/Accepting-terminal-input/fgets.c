#include <stdio.h>
#include <string.h>

int main(){

    // scanf only take characters upto any white spaces. so if you have a space between some input it will only take first part
    //ex: (consider input,  'yomesh dissanayake' scanf only take yomesh part)
    // if we need to input character array with white spaces we need to use different funtion called 'fgets()'
    
    char name[25];
    printf("What is your full name ? : ");
    //we give 1.name of the variable , 2.size of the variable , 3. stdin  to the fgets function
    fgets(name,25,stdin); // note: always specify size of the input to match the size of the variable or less than the size of the variable
    printf("I am %s. And I am Sri Lankan.",name);    
    
    //note that when printing example above everything after '%s' jumped to a new line. this is because fgets include a new line at the end of the input by default
    // we can avoid that new line like this,first we need #include <string.h> on the top, then
    printf("\n\nWhat is your good name ? : ");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';
    printf("Hello I am %s. And I am worthless waste of space.",name);

    return 0;
}