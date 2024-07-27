#include<stdio.h>
int CornerSum(int a[][100],int* n,int* m) {
    return a[0][0] + a[0][*m-1] + a[*n-1][0] + a[*n-1][*m-1];
}
int main() {
    int a[100][100],n,m,i,j;
    printf("enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        printf("enter the elements of row %d\n",i+1);
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the matrix input is\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("the sum of corner elements is %d",CornerSum(a,&n,&m));
    return 0;
}