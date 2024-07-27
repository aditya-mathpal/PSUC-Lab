#include<stdio.h>
int main() {
    //program to only accept even numbers from user, terminates if user enteres odd number
    int num, sum=0;
    printf("enter even numbers, odd terminates process\n");
    for(;;) {
        scanf("%d",&num);
        if(num%2==0)
            continue;
        else {
            printf("process terminated\n");
            break;
        }
    }
    return 0;
}