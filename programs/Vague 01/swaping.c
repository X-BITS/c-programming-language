#include<stdio.h>

int main()
{
    int a,b,c;

    printf("enter the number a:\n");
    scanf("%d", &a);
    printf("enter the number b:\n");
    scanf("%d", &b);
    printf("before: a: %d | b: %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("swaping: a: %d | b: %d\n", a, b);

    return 0;
}
