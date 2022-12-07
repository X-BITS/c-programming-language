#include<stdio.h>

int main()
{

    int x, y;
    
    printf("enter the number x:\n");
    scanf("%d", &x);

    printf("enter the number y:\n");
    scanf("%d", &y);

    if(x > y)
    {
        printf("x: %d > y: %d\n", x, y);
    }else if(y > x)
    {
        printf("y: %d > x: %d\n", y, x);
    }else
    {
        printf("x: %d == y: %d\n", x, y);
    }

    return 0;

}