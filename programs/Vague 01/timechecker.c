#include<stdio.h>
int main()
{

int hours, minutes, seconds;

printf("input hours:\n");
scanf("%d", &hours);

printf("input minutes:\n");
scanf("%d", &minutes);

printf("input seconds:\n");
scanf("%d", &seconds);

printf("The current time: %d: %d: %d\n", hours, minutes, seconds);
printf("After 30 seconds time would be incha allah\n");
seconds = seconds + 30; /* seconds += 30; */

if(seconds < 30)
{
    printf("The new time: %d: %d: %d\n", hours, minutes, seconds);

}else if(seconds >= 30)
{
    minutes = minutes + (seconds/60);
    seconds = seconds % 60;
    if(minutes < 59)
    {
    
    printf("The new time: %d: %d: %d\n", hours, minutes, seconds);

    }else if(minutes >= 59)
    {
        minutes = 0;
        hours   = hours + 1;

        if(hours < 23)
        {

            printf("The new time: %d: %d: %d\n", hours, minutes, seconds);

        }else if(hours >= 23)
        {
            hours = 0;
            printf("The new time: %d: %d: %d\n", hours, minutes, seconds);

        }
    }
}




    return 0;
}