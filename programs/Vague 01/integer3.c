/*
Language: c programming language.
Program : creating a program that take an positive integer 
          number as input then calculate sum of all odd  
          and even position of symbols that do compose 
          that number without using arrays or data structure.
          eg:
          ------------------------------
          position: 54321
          input   : 14537
          output  :
                sum of odd = 13
                sum of even= 7                
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
                              
                This is how we extract values, now lets see how to calculate even and odd sums depends on digit position
                we test if position % 2 == 0 is even? if yes we add res to even by: even = even + res; (no matter res is odd or even)
                if not else, this means it's odd so we add that to odd sum by     : odd  = odd  + res; (no matter res is odd or even)
                That's all!. 
*/

//including third party functionalities from c library like printf and scanf
#include<stdio.h>


int main()
{

    //creating two variable n to hold the integer number, res to hold digits, odd and even to hold sums, index to indicate the position.
    int n, res, odd, even, index = 1;
    odd = even = 0;
    //output to the user the string to notify him to put data
    printf("enter an integer number: \n");
    scanf("%d", &n);
    //if the number is 0 so there are no digits to print more then 0
    //so no sums to calculate so 0 get printed.
    if(n == 0)
        printf("%d\n", n);
    else
    {
        while(n != 0)
        {
            //calculate the rest of integer division between n and 10 to extract ones
            //put ones digit in res	
            res = n % 10;
            //test if the position of digit is an odd or even and index start from 1
            if(index % 2 == 0)
            	//add res to even since index is even
                even += res;
            else
            	//add res to odd since index is odd
                odd += res;  
            n   = n / 10;
            //incrementation of index to the next position
            index++;
        }
    } 
    
    //output the result of odd sum and even sum
    printf("Odd Digit Sum = %d\n", odd);
    printf("Even Digit Sum = %d\n", even);
    return 0;

}

