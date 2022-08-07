//7. Write a function to check whether a given string is palindrome or not.
//121,level,radar.....
#include<stdio.h>
#include<string.h>
void check_palindrome(char str[]);
void main()	
	{
		char str[10];
		printf("enter the string to check string is palindrom ot not ");
		gets(str);
		check_palindrome(str); 
	}
	void check_palindrome(char str[])
	{
		int i,len;
		int flag=0;
		len=strlen(str);
		for(i=0;len;i++)
			{
				if(str[i] != str[len-i-1])
					flag=1;
				break;		
			}
			 if (flag) {
        printf("%s is not a palindrome", str);
    }    
    else {
        printf("%s is a palindrome", str);
    }
}
