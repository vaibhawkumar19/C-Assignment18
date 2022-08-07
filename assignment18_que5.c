//4. Write a function to transform string into lowercase.
#include<stdio.h>
#include<string.h>
int main()
{
	int str[50];
	printf("enter your name ");
	gets(str);
	strlwr(str);
	printf("%s",strlwr(str));
}
