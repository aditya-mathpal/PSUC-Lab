#include<stdio.h>
int main() {
    int a[100][100],n,m,i,j,sum=0,sum2;
    printf("enter number of rows and columns:\n");
    scanf("%d%d",&n,&m);
    if(n!=m) {
        printf("not a magic square");
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
    for(i=0;i<n;i++)
        sum += a[i][i];
    for(i=0;i<n;i++) {
        for(j=0,sum2=0;j<n;j++)
            sum2 += a[i][j];
        if(sum2!=sum) {
            printf("not a magic square");
            return 0;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0,sum2=0;j<n;j++)
            sum2 += a[j][i];
        if(sum2!=sum) {
            printf("not a magic square");
            return 0;
        }
    }
    for(i=0,sum2=0;i<n;i++)
        sum2 += a[i][n-i-1];
    if(sum2!=sum) {
        printf("not a magic square");
        return 0;
    }
    printf("magic square");
    return 0;
}