#include<stdio.h>
 void main()
 {
  int a,b,c;
  printf("enter operand1...:");
  scanf("%d",&a);
  printf("enter operator...:");
  scanf("%d",&c);
  printf("enter operand2...:");
  scanf("%d",&b);
  switch(c)
  {
  case 1:
    printf("%d",a+b);
    break;
  case 2:
    printf("%d",a-b);
    break;
  case 3:
    printf("%d",a*b);
    break;
  case 4:
    printf("%d",a/b);
    break;
  default :
    printf("enter a valid operation");
  }
}




