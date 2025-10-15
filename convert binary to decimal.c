//convert binary to decimal
#include <stdio.h>
#include <math.h>
int main()
{
    printf("enter the binary number:");
    int binary;
    scanf("%d",&binary);
    int sum=0,temp,count=0;
    while(binary>0)
    {
        temp=binary%10;
        binary/=10;
        if (temp==1)
        {
            sum+=(int)pow(2,count);
        }
        count++;
    }
    printf("this is the final sum:%d",sum);
    return 0;
}