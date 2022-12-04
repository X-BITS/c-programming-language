#include<stdio.h>
#include<stdlib.h>




void binaryComb(int, char[]);


int main(void)
{

	int n;
	do
	{
    	
    	printf("input an integer number please:");
	scanf("%d",&n);
	
	}while(n<=0);
	
	char arr[n+1];
	     arr[n] = '\0';	
	binaryComb(n, arr);

    	return 0 ;
    
}


void binaryComb(int n, char arr[])
{
	if (n<1){
		printf("%s \n",arr);
		return;
		}
		else
		    {   
		    
		        //Go in the 0's sides
			arr[n-1]='0';
			binaryComb(n-1, arr);
			
			//Go in the 1's sides
			arr[n-1]='1';
			binaryComb(n-1, arr);
		    }
}
