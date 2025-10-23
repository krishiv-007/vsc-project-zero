#include <stdio.h>
#include <math.h>
int check(int num, int len)
{
    if(num==0)
    {
        return 0;
    }
    int temp=(int)pow((num%10),len);

    return temp + check(num/10,len);
}
int main()
{
    printf("enter the number:");
    int num,count=0;
    scanf("%d",&num);
    int temp =num;
    while(temp>0)
    {
        temp/=10;
        count++;
    }
    int value=check(num,count);
    if(value==num)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;

}