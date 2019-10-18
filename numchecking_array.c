#include<stdio.h>
void main() {
    int a[10],n,x,i,c=0;
    printf("enter n value...");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter x value...");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            c==1;
            break;
        }
    }
    if(c==1)
    {
        printf("x is present in the array");
    }
    else
    {
        printf("x is not present in the array");
    }
}
