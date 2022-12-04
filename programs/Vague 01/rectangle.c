/*
Language: c programming language.
Program : create a program that take n and draw a rectangle
          eg:
          ------------------------------
          input   : 20
          output  :
		    ********************
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    ********************               
          ------------------------------
Author      :  Sahraoui mohammed Taher amine.
Date        :  19-11-2022.
Community   :  Black Dragons.
How it works:
               we take the number n with a do while control we need n be at least egual to 3 to draw a rectangle
	       we create a first loop responsible for creating 20 line cross the screen and inside of it we will
	       set conditions, if (i == 0 or i == n-1) means if we are in the first line or last line we will loop
	       using:
	       	for(int j = 0; j < N; j++)
            	{
                printf("*");
            	}
            	this will be responsible for creating both first and last line without spaces.
            	    ******************** <===== x
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    *                  *
		    ******************** <====== x'
		else:
		we will loop to create other spaced lines in between x and x' lines     
            	for each of those lines if we are in the first position of columns j==0 or the last one j== N-1 we will print *
            	otherwise we will print spaces and this will be responsible to generate a line that looks like this:
            	   
            	   j=0------else------j=N-1 
            	    *                  *     
*/

#include<stdio.h>


int main()
{

    int N;
    //enter the number n
    printf("enter an integer number: \n");
    //control the value n must not be less then 3
    do
    {
        scanf("%d", &N);

    }while(N < 3);
    //create a outerloop responsible for creating lines of the rectangle
    for(int i=0; i < N; i++)
    {
        //test if we are in the first or last line
        if(i == 0 || i == (N-1))
        {
            //create a strightforward line without spaces
            for(int j = 0; j < N; j++)
            {
                printf("*");
            }
        }else
        {
        //we are not in the first or last line so we are in between
           for(int j = 0; j < N; j++)
            {
                //foreach spaced line we test if we are on the first column or not, if we are so we need to print a *
                if(j == 0 || j == (N-1))
                {
                    printf("*");
                }else
                {
                //we are not in the first or last column so we print spaces to make the shape look like rectangle
                    printf(" ");
                }
            }   
        }
        //jump to the new line
        printf("\n");
    } 
    
    //indicate the successfull execution of the program
    return 0;

}

