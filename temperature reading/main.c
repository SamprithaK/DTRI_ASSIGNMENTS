#include <stdio.h>
#include <stdlib.h>
int temp;
int main()
{
    printf("Enter the temperature\n");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Frezing wheather");
    }
    else if(temp>0 && temp<=10)
    {
        printf("Very cold weather");
    }
    else if(temp>10 && temp<=20)
    {
        printf("cold weather");
    }
    else if(temp>20 && temp<=30)
    {
        printf("Normal weather");
    }
    else if(temp>10 && temp<=40)
    {
        printf("Its HOT");
    }
    else
    {
        printf("Its very HOT");
    }
    return 0;
}
/*Temp <0, Freezing weather
Temp 0-10, Very Cold weather
Temp 10-20, Cold weather
Temp 20-30, Normal Temp
Temp 30-40, it’s Hot
Temp >=40, it’s Very Hot*/
