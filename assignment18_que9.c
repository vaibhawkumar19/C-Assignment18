//9. Write a function to reverse a string word wise. (For example if the given string is
//“Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include<stdio.h>
#include<string.h>
void reverse(char str[]);
int main()
{
	char str[100];
	printf("write a sentence to reverse the sentence ");
	gets(str);
	reverse(str);
}
void reverse(char str[])
{
	int i; 
	int len=strlen(str);  	
  	for(i =len-1; i>=0; i--)
	{
		if(str[i] == ' ')
		{
			str[i]='\0';
			printf("%s ",&(str[i])+1);	

		} 
	}	
	printf("%s",str);
	return ;
}

