#include <stdio.h>
#include <stdlib.h>
int hour_day,salary_hour,day_month;
char emp_id[10];
int main()
{
    printf("Enter employee id:\n");
    scanf("%c",&emp_id);
    printf("worked hrs per day:\n");
    scanf("%d",&hour_day);
    printf("salary per hour:\n");
    scanf("%d",&salary_hour);
    printf("number of days worked in month\n");
    scanf("%d",&day_month);
    float salary_perday=(salary_hour*hour_day);
    float net_salary=(salary_perday*day_month);
    printf("Your employee id is %s\n",emp_id);
    printf("Your salary  per day is %.2f\n",salary_perday);
    printf("Your net salary is %.2f\n",net_salary);
    return 0;
}
