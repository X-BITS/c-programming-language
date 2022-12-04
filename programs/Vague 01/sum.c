/*
Language: c programming language.
Program : create a program that caluclate the sum from 1 to n without using a loop.
          eg:
          ------------------------------------
          input : 10
          output: the sum is: 55
          ------------------------------------  
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:  We need only to apply the mathematical rule (n * (n + 1))/ 2 rather then looping from i to n. n times.
               Math plays a big role in distiguich a great programmer from regular ones.    
*/
#include<stdio.h>

int main()
{
    int n, sum = 0;
    do
    {
        printf("Input an integer number >= 1\n");
        scanf("%d", &n);
    }while(n <= 0);

    sum = n * (n + 1) / 2;
    printf("the sum is: %d\n", sum);



    return 0;
}