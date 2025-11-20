//swaping two integers with pointers
#include <stdio.h>
int main()
{
    int x=10;
    int y=20;
    int *ptr1=&x;
    int *ptr2=&y;
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
    printf("%d\n",x);
    printf("%d",y);
}