#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    char str1[100] = "Hello", str2[100]="";//2 string initialization
    int l=strlen(str1);//reading string length of 1st
   // printf("%d",l);
    for(int i=0;i<l-1;i++){
     str2[l-2-i]=str1[i];
    }
    printf("%s",str2);
}
