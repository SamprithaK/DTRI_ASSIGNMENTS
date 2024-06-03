#include <stdio.h>
#include <stdlib.h>
int days;
int main()
{
    printf("Enter the number of days\n");
    scanf("%d",&days);
    float cal_year=(days/365);
int cal_week=((days*365)/7);
int cal_days=(days)-(cal_year*365);
printf("%d days is equivalent to %.4f years:%dweeks:%ddays\n",days,cal_year,cal_week,cal_days);
    return 0;
}
