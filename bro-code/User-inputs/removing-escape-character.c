int main()
{
    int age;
    char name[20];

    printf("\nEnter Name: ");
    scanf("%d",&name);

    printf("\nEnter the symbol: ");
    scanf(" %c",&age); // Note : %c may consume newline character from previous scanf.
                    // To fix this issue, you can add a space before %c in the scanf function for reading the symbol.
                    // This space character tells scanf to skip any whitespace characters, including the newline character, before reading the actual character.

    //scanf("c");	     // Or you can write another scanf without assigning it to a variable to achive the same solution above 

    //name[strlen(name)-1] = '\0';	//or this method also works
}
	