#include<stdio.h>
int IsPrime(int n) {
    int i;
    if(n==2)
        return 1;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main() {
    int n,i,count=0;
    printf("enter n, first n prime numbers will be printed: ");
    scanf("%d",&n);
    for(i=2;count<n;i++) {
        if(IsPrime(i)) {
            printf("%d ",i);
            count++;
        }
    }
    return 0;
}