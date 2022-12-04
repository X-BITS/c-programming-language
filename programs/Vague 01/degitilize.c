#include<stdio.h>

void digitilize();
void odd_even_s();
void odd_even_sp();
void digitlize_sum();

int main()
{

    int choice;
    do
    {
        printf("Select operation:\n1. degitilize number\n2. sum of even and odd numbers\n3. sum of odd and even positions\n4. sum of all digits\n5. exit by enter 0.");
        scanf("%d", &choice);

        switch(choice)
        {
            case 0: break;

            case 1: digitilize(); break;

            case 2: odd_even_s(); break;

            case 3: odd_even_sp(); break;

            case 4: digitlize_sum(); break;

            default:printf("Invalid operation, back to menu\n"); break;
        }

    } while (choice != 0);
    
    return 0;
}

void digitilize()
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
}


void odd_even_s()
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


}

void odd_even_sp()
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

}

void digitlize_sum()
{

    //creating two variable n to hold the integer number, res to hold digits
    int n, res, sum = 0;
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
            //add res value to even sum's
            sum += res;
            //divide n by 10 since we already extract ones
            //then assign the result which is n without the extracted digit to n again
            n   = n / 10;
        }
    }
    //print the values.
    printf("The sum of all numbers = %d\n", sum);
    

}