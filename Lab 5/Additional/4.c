#include<stdio.h>
#include<math.h>
int main() {
    int n,i;
    char a[100];
    printf("enter number of digits: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("enter the %.0f's place digit: ",pow(10,i));
        fflush(stdin);
        scanf("%c",&a[i]);
    }
    printf("the number is ");
    for(i=n-1;i>=0;i--)
        printf("%c",a[i]);
    return 0;
}d