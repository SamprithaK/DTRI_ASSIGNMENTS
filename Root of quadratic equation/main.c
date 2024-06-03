#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float root;
    printf("Enter the coeffients: ");
    scanf("%d%d%d", &a, &b, &c);
    float nroot=(b*b)-(4*a*c);
    if (nroot==0)//real and equal
    {
        float aroot1=(-b/2*a);
        float aroot2;
        printf("the roots are %f and %f",aroot1,aroot2);}
         else if  (nroot > 0)
            {
       float root1 = (-b + sqrt(nroot)) / (2 * a);
        float root2 = (-b - sqrt(nroot)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
        }
        else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-nroot) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
         }
