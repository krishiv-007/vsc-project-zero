//write a code to take in 3 digit number and print the reversed number
#include <stdio.h>
int main()
{   
    int tnum,hun,tens,ones;
    printf("enter the three digit number:");
    scanf("%d",&tnum);
    hun=tnum/100;
    tens=(tnum%100)/10;
    ones=tnum%10;
    printf("the final answer after reversing is:%d",ones*100+tens*10+hun);
    return 0;

}