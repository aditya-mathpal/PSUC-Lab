#include<stdio.h>
int main() {
    int i,j,k,l=1;
    for(i=1;i<=3;i++) {
        for(k=6-2*i;k>0;k--)
            printf(" ");
        for(j=1;j<=2*i-1;j++) {
            printf("%d ",l++);
        }
        printf("\n");
    }
    return 0;
}