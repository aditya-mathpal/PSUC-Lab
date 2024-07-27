#include<stdio.h>
int main() {
    //program to only accept even numbers from user, terminates if user enteres odd number
    int num, sum=0;
    printf("enter even numbers, odd terminates process\n");
    while(1) {
        scanf("%d",&num);
        if(num%2==0)
            continue;
        else {
            printf("process terminated\n");
            break;
        }
    }
    //program to add numbers till a 5 is added, and no 6 is added
    printf("enter numbers to sum, only last addition should be 5, and 6 will not be added\n");
    do {
        scanf("%d",&num);
        if(num==6)
            continue;
        sum += num;
        if(num==5)
            break;
    }
    while(1);
    printf("the sum is %d",sum);
    return 0;
}