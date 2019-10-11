#include<stdio.h>
 void main()
 {
  float a,bill,charge;
  printf("enter total units consumed...:");
  scanf("%f",&a);
  if(a<=50)
  {
   bill=a*0.50;
   printf("Electricity Bill=%f",bill);
   charge=bill+(20/100)*bill;
   printf("Electricity Bill=%f",charge);
 }
 else if(50<a<=150)
  {
   bill=a*0.75;
   printf("Electricity Bill=%f",bill);
   charge=bill+(20/100)*bill;
   printf("Electricity Bill=%f",charge);
  }
  else  if(150<a<=250)
  {
   bill=a*1.20;
   printf("Electricity Bill=%f",bill);
   charge=bill+(20/100)*bill;
   printf("Electricity Bill=%f",charge);
 }
   if(a>250)
  {
   bill=a*1.50;
   printf("Electricity Bill=%f",bill);
   charge=bill+(20/100)*bill;
   printf("Electricity Bill=%f",charge);
  }
 }



