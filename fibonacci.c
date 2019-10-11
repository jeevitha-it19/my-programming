 #include<stdio.h>
 int main()
 {
 int a=0,b=1,c,i,n;
 printf("enter n value=");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  if(i==0||i==1)
  {
   c=i;
  }
  else
  c=a+b;
  printf("%d",c);
  a=b;
  b=c;
 }
 return 0;
 }


