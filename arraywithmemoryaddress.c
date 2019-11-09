#include<stdio.h>
void main()
{
int n,i,j,a[15];
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d-%d\n",a[i],i);
}
}
