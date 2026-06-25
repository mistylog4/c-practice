#include<stdio.h>
int main()
{
char p;
int t;
printf("enter any character");
scanf("%c",&p);
//method-1
printf("ASCII=%d",p);
//method-2
printf("\nASCII=%d",(int)p);
//method-3
t=p;
printf("\nASCII=%d",t);
return 0;
}