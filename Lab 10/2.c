#include<stdio.h>
int FIB(int n) {
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return FIB(n-1) + FIB(n-2);
}
int main() {
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("term %d of Fibonacci sequence is %d",n,FIB(n));
    return 0;
}