#include<stdio.h>
int main() {
    int n,n2,rev=0;
    printf("enter a number to check if it's a palindrome\n");
    scanf("%d",&n);
    n2 = n;
    while(n>0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    if(rev == n2)
        printf("the number is a palindrome");
    else
        printf("the number isn't a palindrome");
    return 0;
}