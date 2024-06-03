#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char word[]="dell laptop\0";//iitializing a string
int main()
{
    int length=strlen(word);//finding string length
    printf("%c\n",word[length-1]);//printing the value through length
    return 0;
}
