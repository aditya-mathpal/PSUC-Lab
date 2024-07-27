#include<stdio.h>
int main() {
    int a[100],n,ele,i,j;
    printf("enter number of elements in array: ");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("the array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nenter the element to be deleted: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++) {
        if(a[i]==ele) {
            for(j=i;j<n-1;j++) {
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }
    printf("the updated array is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}