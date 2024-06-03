#include <stdio.h>
#include <stdlib.h>

int main() {
    int s, t;//initializing s and t

    printf("ENTER THE VALUE TO BE INCREMENTED\n");
    scanf("%d", &s);//storing

    printf("ENTER THE VALUE TO BE DECREMENTED\n");
    scanf("%d", &t);//storing

    int inc1 = ++s;//pre incrementing
    int dec1 = --t;//pre decrementing

    //int inc1_ = ++s;
    //int dec1_ = --t;

    printf("the post incremented value is %d\n", inc1);
    printf("the post decremented value is %d\n", dec1);
    //printf("the pre incremented value is %d\n", inc1_);
    //printf("the pre decremented value is %d\n", dec1_);

    return 0;
}
