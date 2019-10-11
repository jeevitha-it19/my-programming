#include<stdio.h>
 int main()
 {
  int a,b,c,d;
  printf("enter 4 numbers");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if((a<b)&&(a<c)&&(a<d))
  {
   printf("smallest no is %d",a);
  }
  else if((b<c)&&(b<d))
  {
   printf("smallest no is %d",b);
 }
 else if(c<d)
  {
  printf("smallest no is %d",c);
 }
else
{
  printf("smallest no is %d",d);
}
}



