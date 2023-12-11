#include <stdio.h>
#include <string.h>

int main()
{
	char string1[]="Yomesh";
	char string2[]="Dissanayake";
			

		// Converting to Upper-case or Lower-case
	//strlwr(string1);	// Converts a string to lower case
	//strupr(string1);	// Converts a string to upper case
	//printf("%s",string1);// testing lowercase upper case	

		//Appending and coppying

	//strcat(string1,string2);//Appends string2 to end of string1
	//strncat(string1,string2,1); //Appends n characters from string2 to string1
	//strcpy(string1,string2); //Copy string2 to string1 (Note: it will replace what's was already in the string1)
	//strncpy(string1,string2, 4); //Copy n number of characters from string2 to string1)
	//printf("%s",string1); //testing	

		//Set characters
	//strset(string1, '?');	// Sets all characters of a string to a given character
	//strnset(string1, 'x',1); // Sets first n characters of a string to a given character
	//printf("%s",string1); // testing
		//reversing a string
	//strrev(string1);	// reverses a string
	//printf("%s",string1); // testing


	//int result = strlen(string1); //Returns string length as int
	//printf("%d",result); //testing

		// Compares the string and returns 0 if both are same ,returns 1 if they don't match
	//int result = strcmp(string1,string2); //String compare all characters
	//int result = strncmp(string1,string2,1); // String compare n characters
	//int result = strcmpi(string1,string1);   //String compare all (ignore case)
	//int result = strnicmp(string1,string1,1); // String compare n characters (ignore case)

	//if(result ==0) // to test all the string compare features above
	//{
	//	printf("These strings are the same");
	//}
	//else
	//{
	//	printf("These strings are not the same");
	//}



	return 0;
}
