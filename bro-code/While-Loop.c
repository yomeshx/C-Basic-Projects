//while loop that ask user name again and again if user didn't give his or her name.
#include <stdio.h>
#include <string.h>

int main()
{

	char name[25];

	printf("\nEnter Your Name: ");
	fgets(name,25,stdin);
	name[strlen(name)-1] = '\0';	//Note: fgets add a newline by default we need to remove that before checking for blank user inputs.
					//because program can mistakenly take that newline character as a valid user input. 	
	while (strlen(name)== 0)
	{
		printf("\nYou didn't Enter Your Name! \nPlease Enter Your Name: ");
		fgets(name,25,stdin);
		name[strlen(name)-1] = '\0';
	}
	
	printf("\nHi %s, Welcome to the Paradise!",name);

	return 0;
}
