#include<stdio.h>
int Fact(int a) {
    if(a==0 || a==1)
        return 1;
    int f=a,i;
    for(i=a-1;i>=2;i--)
        f *= i;
    return f;
}
int main() {
    int n,r;
    printf("enter n and r: ");
    scanf("%d%d",&n,&r);
    printf("nCr = %d",Fact(n)/(Fact(r)*Fact(n-r)));
    return 0;
}