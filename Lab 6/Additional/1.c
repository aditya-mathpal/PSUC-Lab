#include<stdio.h>
int main() {
    int a[100][100],n,m,i,j,r1,r2,c1,c2,temp;
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
    printf("enter rows to interchange:\n");
    scanf("%d%d",&r1,&r2);
    if(r1>n || r2>n || r1<1 || r2<1) {
        printf("row doesn't exist");
        return 0;
    }
    for(i=0;i<m;i++) {
        temp = a[r1-1][i];
        a[r1-1][i] = a[r2-1][i];
        a[r2-1][i] = temp;
    }
    printf("the updated matrix is\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("enter columns to interchange:\n");
    scanf("%d%d",&c1,&c2);
    if(c1>m || c2>m || c1<1 || c2<1) {
        printf("row doesn't exist");
        return 0;
    }
    for(i=0;i<n;i++) {
        temp = a[i][c1-1];
        a[i][c1-1] = a[i][c2-1];
        a[i][c2-1] = temp;
    }
    printf("the updated matrix is\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}