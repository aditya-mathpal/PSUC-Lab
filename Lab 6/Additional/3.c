#include<stdio.h>
int main() {
    int a[100][100],n,m,i,j,colSum,rowSum;
    printf("enter number of rows and columns:\n");
    scanf("%d%d",&n,&m);
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
        for(j=0,rowSum=0;j<m;j++)
            rowSum += a[i][j];
        printf("sum of elements of row %d = %d\n",i+1,rowSum);
    }
    for(i=0;i<m;i++) {
        for(j=0,colSum=0;j<n;j++)
            colSum += a[j][i];
        printf("sum of elements of column %d = %d\n",i+1,colSum);
    }
    return 0;
}