#include<stdio.h>
int main() {
    int a[100][100],n,m,i,j,count=0,ele;
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
    printf("enter element to count: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i][j]==ele)
                count++;
        }
    }
    printf("element occurs %d times",count);
    return 0;
}