#include<stdio.h>
int main() {
    int a[100][100],n,m,i,j;
    printf("enter number of rows and columns:\n");
    scanf("%d%d",&n,&m);
    if(n!=m) {
        printf("not a square matrix");
        return 0;
    }
    for(i=0;i<n;i++) {
        printf("enter the elements of row %d\n",i+1);
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the matrix input is\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<m;j++)
            if(a[i][j]!=0) {
                printf("not lower triangular");
                return 0;
            }
    }
    printf("lower triangular");
    return 0;
}