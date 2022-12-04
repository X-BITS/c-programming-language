/*
Language: c programming language.
Program : creating a program that take an positive integer 
          number as input then print all symbols 
          that do compose that number without using
          arrays or data structure.
          eg:
          ------------------------------
          input : 14537
          output:
                7
                3
                5
                4
                1
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:
               we take the number n with a do while control
               > if n == 0 so there are no numbers to extract
               the only digit is n it self so we print 0.
               
               > otherwise:
               we loop while n is different then 0
               We assign the value of rest of division of n by 10 using res = n % 10;
               This means if we have for example the number 9 so res = 9 % 10 which is 9 
               So we extract ones and 9 is assigned to res. since 9 is ones there are no
               numbers left to extract so n = 9 / 10 will get 0 and n becomes 0 then we
               jump out of the loop and 9 get printed as output since it the only number
               entered as input. if we do a bigger number things become more intressting
               try to do 145. > res = 145 % 10 (res = 5)
                              > n   = 145 / 10 (n   = 14)
                              > res = 14 % 10  (res = 4)
                              > n   = 14 / 10  (n   = 1) X
                              > res = 1 %  10  (res = 1)
                              > n   = 1 /  10  (n   = 0) we get out of the loop
                We notice that this program can be optimised and stop the the loop in X iteration
                and print n for the last iteration instead of res, because we are recalculating
                things without a reason.
*/

//including third party functionalities from c library like printf and scanf
#include<stdio.h>

int main()
{
    //creating two variable n to hold the integer number, res to hold digits
    int n, res;

    do{
    //output to the user the string to notify him to put data
    printf("enter an integer number: \n");
    //input data and put it to n variable
    scanf("%d", &n);
    }while(n < 0);

    //if the number is 0 so there are no digits to print more then 0
    //so 0 get printed.
    if(n == 0)
        printf("%d\n", n);
    else
    {
        //if the number is bigger then 0 we extract the number depends on the position
        //we loop into the number while the number is different then 0
        while(n != 0)
        {
            //calculate the rest of integer division between n and 10 to extract ones
            //put ones digit in res
            res = n % 10; 
            //divide n by 10 since we already extract ones
            //then assign the result which is n without the extracted digit to n again
            n   = n / 10;
            //output the first digit if n got more then one symbol eg: hundred or thousend
            printf("%d\n", res);
        }
    }
    //indicate a successfull execution to OS
    return 0;

}


/*
//Alternative program:
int main()
{
    int n, res;
    printf("enter an integer number: \n");
    do{
    scanf("%d", &n);
    }while(n < 0);
    if(n == 0)
        printf("%d\n", n);
    else
    {
        while(n > 9)
        {
            res = n % 10; 
            n   = n / 10;
            printf("%d\n", res);
        }
    }
    printf("%d\n",n);
    return 0;

}
*/
