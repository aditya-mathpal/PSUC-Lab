#include<stdio.h>
int largest(int *a,int n) {
    int i = 0;
    int *max = a;
    for(;i<n;i++,a++) {
        if(*a>*max)
            max = a;
    }
    return *max;
}
int main() {
    int a[100], *max, i, n;
    printf("enter number of numbers in list: ");
    scanf("%d",&n);
    printf("enter numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("the largest number is %d",largest(a,n));
    return 0;
}