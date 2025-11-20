#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0;
    int b = 1;
    int num;
    
    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("%d\n", a);  
        int temp = b;
        b = a + b;   
        a = temp;    
    }
    return 0;
}
