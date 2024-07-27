#include<stdio.h>
int main() {
    int n,n2;
    printf("enter a number\n");
    scanf("%d",&n);
    n2=n;
    for(;n2/10!=0;n=n2) {
        for(n2=0;n>0;n/=10) {
            n2 += n%10;
        }
    }
    printf("generic root is %d",n2);
    return 0;
}