//6. Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
#include<string.h>
int alpha_string(char str[]);
int main()
{
	char str[100],flag=1;
	printf("enter the string to check alphanumeric string ");
	fgets(str,100,stdin);
	alpha_string(str);
	if(flag==alpha_string(str))
		printf("string is alphanumeric");
	else
		printf("string is not alphanumeric");
}
int alpha_string(char str[])
{
	int i;
	int d=0,a=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z' ) || (str[i]>='A' && str[i]<='Z'))
		  a=1;
		if((str[i]>='0' && str[i]<='9'))
			d=1;
	}
	if(a==1 && d==1)
		return 1;
	else
		return 0;
}
