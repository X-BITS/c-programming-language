/*
Language: c programming language.
Program : create a program that enable the nth bits of the status number where status = 0.
          eg:
          ------------------------------------
          input : 4
          output: status after enabling 4 bits: 15
          ------------------------------------  
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:  The logic is simple:
               1. first we need to right shift bits by 1 position.
               2. enable the 0 we add when we right shift to 1 by using or operation.
*/

#include<stdio.h>

int main()
{
    int status = 0;
    int n;
    printf("Enter the number n: \n");
    scanf("%d", &n);
    for(int i=1; i <= n; i++){
        status = status << 1;
        status = status |  1;
    }
    printf("status after enabling %d position is: %d\n\b",n, status);

    return 0;
}