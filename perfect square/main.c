#include<stdio.h>//preprocessor directive for printf and scanf
#include<math.h>//for mathematical operations
int main()
{
    int s;
    printf("Enter thr number \n");
    scanf("%d",&s);
    float sq=sqrt(s);
    int fv=sq;
    if(fv==sq)
    {
        printf("%d is the perfect square",s);
    }
    else
      printf("%d is the  not perfect square",s);

return 0;
}
