#include<stdio.h>
#include<math.h>
int main() {
    int n,n2,arm=0;
    printf("Enter a number to check whether it's Armstrong\n");
    scanf("%d",&n);
    n2 = n;
    while(n2>0) {
        arm = arm + pow(n2%10,3);
        n2/=10;
    }
    if(arm==n)
    printf("it is Armstrong");
    else
    printf("it is not Armstrong");
    return 0;
}