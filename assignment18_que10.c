//10. Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>
void repeated(char str[]);
int main()
{
	char str[100];
	printf("enter the string ");
	gets(str);
	repeated(str);
	return 0;
}
void repeated(char str[])
{
	int i,j;
	int count;
	for(i=0;strlen(str);i++)
		{
			count=1;
			for(j=i-1;strlen(str);i++)
			{
				if(str[i]==str[j] && str[i]!=' ')
				{
					count++;
					str[j]=0;
				}
			}
			if(count>1 &&str[i]!=0)
			printf("%c",str);
		}
return ;
}
