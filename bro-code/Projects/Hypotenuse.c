#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double hypo;

    
    printf("\n            <--- Hypotenuse Calculator --->"); 

    printf("\n\nEnter A : ");
    scanf("%lf",&a);

    printf("\nEnter B : ");
    scanf("%lf",&b);

    hypo = sqrt(a*a+b*b);

    printf("Hypotenuse : %lf ",hypo);

    return 0;

}
//if there's an error when running in the terminal,saying
/*

/usr/bin/ld: /tmp/ccdlNJvg.o: in function `main':
Hypotenuse.c:(.text+0xa5): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status

*/
//you may required to enter `gcc -o Hypotenuse Hypotenuse.c -lm` to compile and then the terminal to run this
//explained: when you run gcc -o Hypotenuse Hypotenuse.c -lm, you are telling the compiler to compile the "Hypotenuse.c" source code, generate an executable named "Hypotenuse," and link it with the math library. This enables your program to use mathematical functions from the math library. After running this command, you can execute your program by typing './Hypotenuse' in the terminal.