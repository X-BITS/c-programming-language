/*
Language: c programming language.
Program : create a program that find the strong numbers
          with a range of numbers 1 to n. a strong number is
          a number that the sum of factorial of their digits
          equals to the number it self.
          eg: 145 = 1! + 4! + 5! = 1 + 24 + 120
          
          eg:
          ------------------------------
          input: 145
          output: 145 is a strong number.
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:  This is a mathematical problem that we need to analyze then figure out a way
               to tell computer to do such a set of instruction that can do the same thing
               Well a strong number is a clear what we need to do is:
               1. figure out a way to decompose a number into a set of digits
               2. calculate a factorial of each digit
               3. calculate the sum of results
               4. check if the number is strong or not
               5. print it if it's true
               6. iterate for the next number


*/

#include<stdio.h>

int main()
{


	int n, digit, temp, fact, sum;
	printf("input a number: ");
	scanf("%d", &n);
	temp = n;
	while(temp != 0)
	{
		fact = 1;
		digit = temp % 10;
		temp   = temp / 10;
		for(int i=1; i <= digit; i++)
			fact = fact * i;
		sum = sum + fact;
	}
	
	if(n == sum)
	{
		printf("%d is a strong number\n", n);
	}else{
		printf("%d is not a strong number\n", n);
	}

	return 0;
}

