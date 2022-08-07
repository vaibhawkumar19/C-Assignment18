//8. Write a function to count words in a given string
/*#include<stdio.h>
#include<string.h>
void countword(char str[]);
int main()
{
	char str[100];
	printf("enter the string ");
	fgets(str,100,stdin);
	countword(str);
	
}
void countword(char str[])
{
	int i,count=1;
	for(i=0;str[i]='\0';i++)
	{
	if(str[i]== ' ' || str[i]=='\n'|| str[i]=='\t')
		{	
		count++;
		}
	}
	printf("%d",count);
}*/
#include <stdio.h>
#include <string.h>
void count(char str[]); 
int main()
{
  	char str[100];
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	count(str);
  }
  void count(char str[])
  {	
  int i,totalwords=1;   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("\n The Total Number of Words in this String %s  = %d", str, totalwords);
	
  	return ;
}
