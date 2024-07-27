#include<stdio.h>
int Largest(int a[],int* n) {
    int max=a[0],i;
    for(i=1;i<*n;i++)
        if(max<a[i])
            max = a[i];
    return max;
}
int main() {
    int a[100],n,i;
    printf("enter number of numbers in list: ");
    scanf("%d",&n);
    printf("enter numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("the largest number is %d",Largest(a,&n));
    return 0;
}