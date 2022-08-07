//3. Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the first string ");
	gets(str1);
	printf("enter the second string ");
	gets(str2);
	strcmp(str1,str2);
	printf("%s",strcmp(str1,str2));
	
}
