//finding the sum of digits recursivily
#include <stdio.h>
int sumd(int num)
{   
    if(num>0)
    {
        return (num%10) + sumd(num/10);
    }
    else
        return 0;
}
int main()
{       
    printf("enter the number:");
    int num;
    scanf("%d",&num);
    int value=sumd(num);
    printf("the sum of the digit is:%d",value);
    return 0;
}