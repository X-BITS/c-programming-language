/*
Language: c programming language.
Program : create a program that take n and check if n is amestrong number or not
          eg:
          ------------------------------
          input   : 153
          output  : 153 is amestrong number.
		                 
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:  First we need to understand the problem and analyze it mathematically since it's
               mathematics problem. suppose n = 153, we can say that n is amestrong if and only
               if 153 = 1^3 + 5^3 + 3^3 = 153.
               First we take the lenght of the number since 153 contains 3 digits so the power
               is 3. if n=1634 here the lenght of n is 4 so the power is for and we need to check
               1^4 + 6^4 + 3^4 + 4^4 is it equals to 1634 it self or not? if it's true so we say
               that 1634 is amestrong so after taking the length take each digit that compose the
               number raise it into power of the length of the number which is 4 in our case then
               add result toghether 1 + 1296 + 81 + 256 = 1634.  
               After understading the problem we need to start to think as a computer, a computer
               cannot devide digits directly as human brains if i told you tell me how much the 
               lenght of 148791 you will count digits and tel me well it's 6 and if i told you to
               spell them out you will say ites 1 then 9 then 7 then 8 then 4 then 1. computer cannot
               do this unless you tell him to do so (programs) or teach it (ML) so since we are 
               not in (ML) and working only using algorithm we need to tell computer the correct
               instructions to solve such problem.
               
               1) calculate the lenght of the number, is it thousend or hundred or other ?
               To to this we need to divide the number by 10 and see how much 10's are there
               inside this number. keep in mind that the number 10 hold 2 position and not only
               one so it's 1 and 0. for each division we will increment a counter by 1 named power
               using power++;
               eg:
               153 / 10 = 15 | power = 1 Extracting the first 10 from 100 so we take the hundred's position out 
               --------------------------
               15  / 10 = 1  | power = 2 Extcating the second 10 from 10 so we take ten's position and no 10's left
               1   / 10 = 0  | power = 3 Since 10 hold ten's and ones we need to extract ones position from the last ten
               --------------------------
                1   5   3                          
                _   _   _                power = 3 All position are counted successfully
                
                to do so:
                while(nb != 0)
                {
                    nb = nb / 10;
                    power++;
                }
                After that we need to take each digit of number 153 and raise it with the power then sum them
                all toghether to understand how decomposing works check integer1.c program. we create a variable p
                to hold the value of p then we loop power time and multiply res = res * p; this is just equivalent
                to res * res * res if power is equal to 3.
                
                p   = res; 
                for(int i=1; i < power; i++)
                    {
                         res = res * p;
                    }
                we can't use res = res * res; because the logic is wrong so we need to fix res somehow
                that's why we use p to take the value of res each time a digit is extracted.
                suppose: 153
                with: res = res * res
                      res = 3 * 3
                      res = 9 * 9
                      the final result is 81 != then 3*3*3 = 27
                with: res = res * p
                      res = 3  * 3
                      res = 9  * 3
                      the final result is 27 = 3*3*3 = 27
                after that we just need to add the final result to sum
                then check what if sum equals to n or not to decide whather
                the number is amestrong or not.  
*/                    
#include<stdio.h>

int main()
{

    int n, sum, res, power, nb, p;
    power = sum = 0;
    do 
    { 
        printf("Enter a positive number: \n");
        scanf("%d", &nb);
    }while(res <= 0);
   
    n = nb;
    printf("the number n : %d\n", n);
    
    while(nb != 0)
    {
        nb = nb / 10;
        power++;
    }

    nb = n;

    printf("The power of n : %d\n", power);


    //if the number is bigger then 0 we extract the number depends on the position
    //we loop into the number while the number is different then 0
    while(nb != 0)
    {
        //calculate the rest of integer division between n and 10 to extract ones
        //put ones digit in res
        res = nb % 10; 
        p   = res; 
        //calculate the extracted number^power you can also use pow(res,power); using built in function
        for(int i=1; i < power; i++){
            res = res * p;
        }
        //add res to sum
        printf("=======> res: %d\n", res);    
        sum = sum + res;
        printf("=======> sum: %d\n", sum);    
        //divide n by 10 since we already extract ones
        //then assign the result which is n without the extracted digit to n again
        nb   = nb / 10;
    }
    //check if the sum of the digits that compose n power of the length of n is equal to n it self
    //say it's amestrong otherwise it's not ..
    if(sum == n)
    {
        printf("The sum is   : %d\n", sum);
        printf("The number %d is amestrong number.\n", n);
    }else
    {
        printf("The sum is   : %d\n", sum);
        printf("The number %d is not amestrong number.\n", n);
    }

    return 0;
}