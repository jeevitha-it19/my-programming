#include<stdio.h>
 void main()
{
 int number,a,remainder,result=0;
 printf("enter a no=");
 scanf("%d",&number);
 a=number;
 while(a!=0)
{
 remainder=a%10;
 result+=remainder*remainder*remainder;
 a/=10;
}
 if(result==number)
 {
 printf("it is an armstrong no");
 }
 else
 {
  printf("not an armstrong no");
 }
}




