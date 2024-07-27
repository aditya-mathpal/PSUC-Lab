#include<stdio.h>
unsigned GCD(unsigned a, unsigned b) {
    if(b==0)
        return a;
    else
        return GCD(b, a%b);
}
int main() {
    unsigned x, y;
    printf("enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("their GCD is %d",GCD(x,y));
    return 0;
}