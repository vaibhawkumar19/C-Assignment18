//2. Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter the string ");
	gets(str);
	printf("\n After the reverse of a string: %s",strrev(str));
	return 0;
}

