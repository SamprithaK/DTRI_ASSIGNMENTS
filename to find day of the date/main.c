#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dd,mm,num,m,rem;
    printf("Jan 1st is sunday\n");
    printf("Enter the date and month\n");
    scanf("%d%d",&dd,&mm);
    m=mm-1;
    switch(m)
    {
    case 1:
        num=31;
        break;
    case 2:
        num=28+31;
        break;
    case 3:
        num=31+31+28;
        break;
    case 4:
        num=30+31+31+28;
        break;
    case 5:
        num=31+30+31+31+28;
        break;
    case 6:
        num=30+31+30+31+31+28;
        break;
    case 7:
        num=31+30+31+30+31+31+28;
        break;
    case 8:
        num=31+31+30+31+30+31+31+28;
        break;
    case 9:
        num=30+31+31+30+31+30+31+31+28;
        break;
    case 10:
        num=31+30+31+31+30+31+30+31+31+28;
        break;
    case 11:
        num=30+31+30+31+31+30+31+30+31+31+28;
        break;
    case 12:
        num=31+30+31+30+31+31+30+31+30+31+31+28;
        break;
    default:
        num=0;
    }
    num=num+dd;
    rem=num%7;
    switch(rem)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
        break;
    default:
        printf("saturday");


    }
    return 0;
}
