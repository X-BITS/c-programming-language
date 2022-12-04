/*
Language: c programming language.
Program : create a program that can an integer number 1 <= n <= 5 return all combination of binary mod that number.          
          eg:
          ------------------------------
          Input a n:
          2
          The binary comb are:
          00
          01
          10
          11
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.


Alternative solution: 1) Solution one:
                      You can use the algorithm that used to print the combainaison of any given string
                      Use the same recursive logic to find all combainaison of certain size of bits   .
                      The down side of this solution is that it's recursive.
                      2) Solution two:
                      Since the n is limited to 1 <= n <= 5 the better solution is to write a switch
                      that take n then depends on n we can write our logic that have several nested
                      loops like if n = 3 we need 3 loops to print 000 to 111. it's the fastest
                      solution in terme of writing an effecient code.
                      3) hardcode statement:
                      You can hardcode the print statement to print values (not good practice)
                      There are other several solution just figure out one! and send your aswser :D  

*/

#include<stdio.h>
#include<math.h>
void decimalToBinary(int[], int, int);

int main()
{
    int n;
    printf("input n: \n");
    scanf("%d", &n);

    int arr[n];
    long long int config = pow(2, n);

    for(int i=0; i < n; i++) arr[i] = 0;
    for(int i=0; i < config; i++) decimalToBinary(arr, i, n);
    
    return 0;
}


void decimalToBinary(int arr[], int number, int n)
{
    int i = n - 1;
    printf("%d = ", number);
    while(number != 0)
    {
        arr[i]      = number % 2;
        number      = number / 2; 
        i--; 
    }
    for(int j = 0; j < n; j++)
        printf("%d", arr[j]);
    printf("\n");

}



