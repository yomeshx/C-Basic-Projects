// switch = switch is a more efficient alternative to using many "else if" statements.
//allows a value to be tested for equality against many cases

#include <stdio.h>

int main(){

    char grade;
    printf("Enter your grade in capital(A,B,C,D,F): ");
    scanf("%c",&grade);

    switch(grade){

        case 'A':
            printf("You done really well !");
            break;  // reason we use break at the end of an each case is to break out of the swith
                    //if you don't add break at the end,it will exicute blocks of code belongs to othere cases too 
                    // (it will print case A print statement but not only that, all these other print statements belongs to Case B,C,D,F too.) 
        case 'B':
            printf("You done ok !");
            break;
        case 'C':
            printf("C is still good !");
            break;
        case 'D':
            printf("You barely survived !");
            break;
        case 'F':
            printf("Fuck !, you failed ! nothing new your whole life is a failure yomesh.");
            break;
        default:            //equalent to "else"
            printf("Invalid grade. Please enter valid grade!");
    }

    return 0;
}