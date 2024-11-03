#include<stdio.h>
int isPrime(int x) {
    if(x<=1)
        return 0;
    int i;
    for(i=2;i*i<=x;i++)
        if(x%i==0)
            return 0;
    return 1;
}

//function named and defined as per Q3
void sum2PN(int* x) {
    int i, flag = 0;
    for(i=2;i<=*x/2;i++)
        if(isPrime(i) && isPrime(*x-i)) {
            printf("%d = %d + %d\n",*x,i,*x-i);
            flag = 1;
        }
    if(flag==0)
        *x = (*x)*(*x);
    else
        *x = *x; //yes the problem actually asks you to do this
}

int main() {
    int a[100][100], M, N, i, j;
    printf("enter dimensions of matrix: ");
    scanf("%d%d",&M,&N);
    //input as per Q1
    printf("enter elements of the matrix row wise: ");
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    //output as per Q1
    printf("Original Matrix:\n");
    for(i=0;i<M;i++) {
        for(j=0;j<N;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    //Q2
    int buffer = 0;
    printf("\nUpdated Matrix with Row and Column Sums:\n");
    for(i=0;i<M;i++) {
        for(j=0;j<N;j++) {
            printf("%d\t",a[i][j]);
            buffer += a[i][j];
        }
        printf("%d\n",buffer);
        buffer = 0;
    }
    int colSum = 0;
    for(i=0;i<N;i++) {
        for(j=0;j<M;j++)
            colSum += a[j][i];
        printf("%d\t",colSum);
        colSum = 0;
    }
    printf("\n\n");

    //calling function in Q3
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
            sum2PN(&a[i][j]);
    //rest of the output as per Q3
    printf("\nFinal Matrix:\n");
    for(i=0;i<M;i++) {
        for(j=0;j<N;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    return 0;
}