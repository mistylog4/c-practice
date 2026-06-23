#include<stdio.h>
void main()
{
int n,i,j,k,sp=10;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=1;k<=sp;k++)
printf(" ");
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
sp--;
}
for(i=n-1;i>=1;i--)
{
for(k=1;k<=sp+2;k++)
printf(" ");
for(j=1;j<=i;j++)
printf("* ");
printf("\n");
sp++;
}
}