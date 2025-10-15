#include <stdio.h>
int main()
{
    printf("enter the number between 1 and 6: ");
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        
        for(int j=1;j<=num-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}