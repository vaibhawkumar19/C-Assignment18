//4. Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	printf("enter the first string ");
	gets(str1);
	strupr(str1);
	printf("%s",strupr(str1));
	
}
