#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int arr[10];

    srand(time(0));
    
    printf("scan elements randomly ....\n");
     for(int i = 0; i < 10; i++)
    {
        /* rand() % (max_number + 1 - minimum_number) + minimum_number */
        arr[i] = rand() % 101;
    }

    printf("Element of the array:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("[%d] ", arr[i]);
    }
    printf("Finding the second largest element on the array\n");
    max1 = max2 = 0;


    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d\n", max2);

    return 0;
}