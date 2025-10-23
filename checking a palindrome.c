//checking if a number is palindrome or not
#include <stdio.h>
#include <string.h>
int check(char str[],int len)
{  
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
            return 0;
    }
    return 1;
}
int main()
{
    printf("enter the number:");
    char str[100];
    scanf("%s",&str);
    int len=strlen(str);
    int value=check(str,len);
    if(value)
    {
        printf("yes its a palindrome");
    }
    else
    {
        printf("it is not a one");
    }
    return 0;   
}
