#include<stdio.h>
int main() {
    int a[100],n,ele,i;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter the distinct elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("the array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nenter the element to be searched: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++) {
        if(a[i]==ele) {
            printf("element is at position %d",i+1);
            return 0;
        }
    }
    printf("element is not in the array");
    return 0;
}