#include<stdio.h>
#include<math.h>
int main() {
    int n,fact,i,j;
    float x,sum=0,sine;
    printf("enter angle in degrees and number of terms\n");
    scanf("%f%d",&x,&n);
    x = (3.14159*x)/180;
    for(i=1;i<=n;i++) {
        for(j=2*i-1,fact=1;j>1;j--) {
            fact *= j;
        }
        sine = (pow(-1,i+1)*pow(x,(2*i-1)))/fact;
        sum += sine;
    }
    printf("the answer is %f",sum);
    return 0;
}