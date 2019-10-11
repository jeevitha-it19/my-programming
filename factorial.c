
#include<stdio.h>
 void main()
{
 long int a,i,fact=1;
 printf("enter a value=");
 scanf("%ld",&a);
 for(i=1;i<=a;i++)
{
 fact=fact*i;
}
 printf("%ld",fact);

}

