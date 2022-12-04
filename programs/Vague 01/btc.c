/*
Language: c programming language.
Program : create a program that can take a binary number to return it's c1 and c2.          
          eg:
          ------------------------------
          Input a size of binary number
          8
          Input a binary number
          10000000
          The binary number     : 10000000
          The ones complement   : 01111111
          The second complement : 10000000
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:  It follow the same principle of converting binary to c1 and c2.
               c1 = inverse all 0's to 1's and all 1's to 0's
               c2 = c1 + 1

*/

void ones_comp(char[], char[]);
void second_comp(char[], char[], int);

int main()
{

    int size;
    printf("Input a size of binary number\n");
    scanf("%d", &size);
    
    char bin[size + 1], c1[size + 1], c2[size + 1];
    printf("Input a binary number\n");
    scanf("%s", bin);

    ones_comp(bin, c1);
    second_comp(bin, c2, size);

    printf("The binary number     : %s\n", bin);
    printf("The ones complement   : %s\n", c1);
    printf("The second complement : %s\n", c2);

    return 0;
}

void ones_comp(char bin[], char c1[])
{
    int i = 0;
    while(bin[i] != '\0')
    {
        if(bin[i] == '0') c1[i] = '1'; else c1[i] = '0';
        i++;
    }
    c1[i] = '\0';
}

void second_comp(char bin[], char c2[], int size)
{

    int j    = 0;
    c2[size]    = '\0';
    for(int i = size - 1; i >= 0; i--)
    {
        if(bin[i] == '1')
            {
                j = i;
                c2[i] = bin[i];
                break;
            }
        c2[i] = bin[i];
    }

    for(int i = j - 1; i >= 0; i--)
    {
        if(bin[i] == '0') c2[i] = '1'; else c2[i] = '0';
    }
}