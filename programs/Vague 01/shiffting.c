#include<stdio.h>

int main()
{
    int a,b;

    printf("enter the number a:\n");
    scanf("%d", &a);
    printf("enter the number b:\n");
    scanf("%d", &b);
    printf("before: a: %d | b: %d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("swaping: a: %d | b: %d\n", a, b);

    return 0;
}
