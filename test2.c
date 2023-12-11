#include <stdio.h>


char birthday (char name[],int age)
{
	char greet[] = "Happy birthday %s , You are %d old now.",name,age);
	return greet;


int main()
{
	char name[25];
	int age;

	printf("What is your name ? : ");
	fgets(name,20,stdin);

	printf("How old are you : ");
	scanf("%d",&age);
	
	birthday_greet= birthday(name,age);
	printf(birthday_greet);
	return 0;

}
