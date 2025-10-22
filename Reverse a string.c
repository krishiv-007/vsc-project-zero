//reversing a string
#include <Stdio.h>
#include <string.h>
void reverse(char arr[],char rev[],int len,int adder)
{   
    if(len<0)
    {
        rev[adder]='\0';
        return;
    }
    rev[adder]=arr[len];
    reverse(arr,rev,len-1,adder+1);
}
int main()
{
    printf("enter the string:");
    char arr[100],rev[100];
    scanf("%s", arr);
    int len=strlen(arr)-1;
    reverse(arr,rev,len,0);
    printf("%s\n",arr);
    printf("%s",rev);
}