#include<stdio.h>
 int main()
 {
  int a,b,c;
  printf("enter 3 angles of the triangle...:");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b+c==180)
  {
   printf("It is valid triangle");
  }
  else
  {
   printf("It is not a triangle");
  }
  return 0;
}

