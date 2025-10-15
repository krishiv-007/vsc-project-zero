#include <stdio.h>
int main()
{
    printf("enter the number:");
    int num;
    scanf("%d",&num);
    int sum=0;
    while(num>0)
    {
        sum=sum+num%10;
        num/=10;
    }
    printf("the sum of digits is:%d",sum);
    return 0;
}

