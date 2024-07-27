#include<stdio.h>
int array_sum(int a[],int *n) {
    int i,sum=0;
    for(i=0;i<*n;i++)
        sum += a[i];
    return sum;
}
int main() {
    int a[100],n,i;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("the sum of elements is %d",array_sum(a,&n));
    return 0;
}