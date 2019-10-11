#include<stdio.h>
void main() {
    int n,x,r;
    printf("enter n value:");
    scanf("%d",&n);
    x=n;
    printf("the reverse of %d is",x);
    do
    {
        r=n%10;
        n=n/10;
    printf("%d",r);
    }while(n>0);
    return 0;
}
