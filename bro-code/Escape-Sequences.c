/*
    escape sequence - Character combination consisting of a Backlash '\'
                      Followed by a letter or combination of digits.
                      They specify actions withing a line or string of text.
                      \n = New Line
                      \t = Tab


 Note : in python when theres two print statements, they printed in a 2 separate lines
        but in C they both print statements are printed in a one line if you dont use '\n'. 
*/

#include <stdio.h>
int main(){
    // Without any escape sequences
    printf("This is Exciting!");
    printf("I always wanted to code in C");
    // Using '\n' to break/new line 
    printf("\nHello !\nHow are you ?\n");
    printf("How was the flight?\n");
    // Using '\t' to add tabs
    printf("Black\tSheep\tDosn't\tEat\tGrass\n");
    printf("1\t2\t3\t4\t5\n\n");
    // Using both \t and \n
    printf("Black\tWhite\tRed\nRed\tBlack\tWhite\nWhite\tRed\tBlack\n");
    
    // You want to use '\' before special characters that are used in the language because program may mistake it as code.
    printf("\"BlaBla\"");   //note that we escape to differentiate litteral '"' from code
    printf("\\WindLab\\"); // note that we use \ to escape litteral '\' from code 
    return 0;

}