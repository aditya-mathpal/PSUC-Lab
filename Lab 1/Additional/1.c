#include<stdio.h>
int main() {
    int n;
    printf("enter number of days: ");
    scanf("%d",&n);
    printf("that is equal to %d years, ",n/365);
    n -= (n/365)*365;
    printf("%d weeks, ",n/7);
    n -= (n/52)*365;
    printf("and %d days",n);
    return 0;
}