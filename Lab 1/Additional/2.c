#include<stdio.h>
int main() {
    int n;
    printf("enter number of seconds: ");
    scanf("%d",&n);
    printf("that is equal to %d hours, ",n/3600);
    n -= (n/3600)*3600;
    printf("%d minutes, ",n/60);
    n -= (n/60)*60;
    printf("and %d seconds",n);
    return 0;
}