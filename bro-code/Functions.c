/*Functions are usefull when you have block of code that used repeatedly few times in your code.
 you can put that code into a function and Invoke(call) it anytime you want.that avoid the re-writing the whole thing over and over again.
 also functions help you keep your code clean and readable.
*/


#include <stdio.h>

void greeting() //  greetings Function
{

	printf("\nWelcome to Sri Lanka!\n");
}

int main()
{
	greeting(); // Invoking (calling) the function 
	greeting();
	greeting();
	return 0;
}
