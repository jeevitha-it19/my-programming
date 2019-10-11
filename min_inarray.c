#include<stdio.h>
 void main()
 {
     int n,i,a[n],min;
     printf("enter n value...");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     min=a[0];
     for(i=0;i<n;i++)
     {
         if(a[i]<min)
         min=a[i];
    
     }
         printf("the min value is %d",min);
 }
