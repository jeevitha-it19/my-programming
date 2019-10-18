#include<stdio.h>
void main() {
    int a[10],n,i;
    printf("enter n value...");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reversal array");
    for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
    printf("\noriginal array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
