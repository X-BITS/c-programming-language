/*
Language: c programming language.
Program : creating a program that take an positive integer 
          number as input then calculate sum of all odd  
          and even symbols that do compose that number without using
          arrays or data structure.
          eg:
          ------------------------------
          input : 14537
          output:
                sum of odd = 16
                sum of even= 4                
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:
               we take the number n with a do while control
               > if n == 0 so there are no numbers to extract
               the only digit is n it self so we print 0 and sum of both is 0.
               
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
                              > n   = 14 / 10  (n   = 1) 
                              > res = 1 %  10  (res = 1)
                              > n   = 1 /  10  (n   = 0) we get out of the loop
                              
                This is how we extract values, now lets see how to calculate even and odd sums
                we test if res % 2 == 0 is even? if yes we add res to even by: even = even + res;
                if not else, this means it's odd so we add that to odd sum by: odd  = odd  + res;
                That's all!. 
*/

//including third party functionalities from c library like printf and scanf
#include<stdio.h>


int main()
{
    //creating two variable n to hold the integer number, res to hold digits
    int n, res, odd, even;
    odd = even = 0;
    //output to the user the string to notify him to put data
    do{
        
        printf("enter an integer number: \n");
        scanf("%d", &n);

      }while(n < 0);

    //if the number is 0 so there are no digits to print more then 0
    //so no sums to calculate so 0 get printed.
    if(n == 0)
        printf("the number is: %d\n", n);
    else
    {
        while(n != 0)
        {
            //calculate the rest of integer division between n and 10 to extract ones
            //put ones digit in res
            res = n % 10;
            //test if the extracted digit is an odd or even
            if(res % 2 == 0)
                //if it's even add res value to even sum's
                even += res;
            else
                //if it's odd add res value to odd sum's
                odd += res;
            //divide n by 10 since we already extract ones
            //then assign the result which is n without the extracted digit to n again
            n   = n / 10;
        }
    }
    //print the values.
    printf("The sum of odd numbers = %d\n", odd);
    printf("The sum of even numbers = %d\n", even);
    return 0;

}

