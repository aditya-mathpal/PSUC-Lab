#include<stdio.h>
int main() {
    int n,sum=0,i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        if(n%i==0)
            sum += i;
    }
    if(sum==n)
        printf("perfect");
    else
        printf("not perfect");
    return 0;
}