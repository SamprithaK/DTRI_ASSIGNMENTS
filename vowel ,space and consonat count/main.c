#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100];//initializing a character
    int vc=0,cc=0,sc=0,i,l,n,v,c,s1;//declare
    printf("Enter the string\n");
    scanf("%[^\n]s",s);
    l=strlen(s);//calculate the entered string length
    printf("%d\n",l);//print the length
    for(i=0;i<l;i++)//from o to string length increment i
    {
        int n=s[i];//store it in n
        if(n>=65 && n<=90)//define ascii values of a e i o u
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')//assign vowel ascii values
            {
                vc++;//increment vowel count
                v=vc;//initialize into v
            }
            else//
            {
                cc++;//increment constants count ;
                c=cc;//store it in c
            }
        }
        else if(n>=97 && n<=122)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                vc++;
                v=vc;
            }
            else
            {
                cc++;
                c=cc;
            }
        }
        else if(n==32)
        {
            sc++;
            s1=sc;
        }
        else
        {

        }
    }
    printf("Count of vowel is %d\n",v);
    printf("Count of consonant is %d\n",c);
    printf("Count of space is %d\n",s1);
    return 0;
}
