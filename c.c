//Create a function takes two arguments  *use function prototype - name ,age
//Create constant variable 
//DO while loop - take 3 numbers add them together
//take the height and round it up
//Use a nested loop
//Use a switch to determaine the grade
//Use string comparison strnicmp
//Use ternary operation and string comparison strnicmp to get the student number.


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int personId(char[],int); // person ID function prototype

int main ()
{
    char name[20];
    int age;
    
    printf("\n----------- Check Membership -----------\n");
    printf("\nEnter Name : ");
    fgets(name,20,stdin);
    strlwr(name);

    printf("\nEnter Age : ");
    scanf(" %d",&age); // left a space to escape the newline from fgets

    printf("\n----------------------------------------\n");

    int identify = personId(name,age);

    if (identify == 1)
    {
        printf("\nListed Member");
        printf("\nWelcome back sir, %s.",name);

    }
    else
    {
        printf("\n          -- | Not a Member | --\n\n");
    }

    return 0;
}

int personId(char name[],int age) // validating if the person is a actual member
{
    const char person[] = "yomesh";
    return (name == person) ? 1 : 0;
}



// Incomplete. Bug says ,Not a member even the name is valid