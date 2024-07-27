#include<stdio.h>
int main() {
    int num,num2,fact,sum=0;
    printf("enter number\n");
    scanf("%d",&num);
    num2 = num;
    while(num) {
        fact = 1;
        int i = num%10;
        while(i>1) {
            fact *= i;
            i--;
        }
        sum += fact;
        num /= 10;
    }
    if(num2==sum)
        printf("strong");
    else
        printf("not strong");
    return 0;
}