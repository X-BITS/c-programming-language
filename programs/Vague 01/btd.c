/*
Language: c programming language.
Program : create a program that can take a binary number and convert it into decimal
          
          eg:
          ------------------------------
          input: 1101
          => +2^0 * 1
          => +2^1 * 0
          => +2^2 * 1
          => +2^3 * 1
          the decimal number is: 13 
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:
compiler    :  gcc btd.c -o btd -lm 

*/
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{

    int  choice, size, number = 0;
    char input[257];
    int  index = 0;
    printf("Input a binary number less than or equal 256 bits: \n");
    scanf("%s", input);
    size = strlen(input);
    int  binary[size];

    while(input[index] != '\0')
    {
        if(input[index] == '0') binary[index] = 0;
        else binary[index] = 1;
        index++;
    }

    printf("The binary number is: ");
    for(int i = 0; i < size; i++) printf("%d", binary[i]);
    printf("\n");
    int p = 0;
    printf("The binary size     :  %d\n", size);

    for(int i = size -1; i >= 0; i--)
    {
        number = number + pow(2,p) * binary[i];
        printf("=> + 2^%d * %d\n", p, binary[i]);
        p++;
    }

    printf("The decimal number  :  %d\n", number);

    return 0;
}
