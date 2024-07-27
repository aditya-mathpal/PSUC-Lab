#include<stdio.h>
int multiply(int a,int b) {
    if(a==0 || b==0)
        return 0;
    else if(b>0) {
        if(b==1)
            return a;
        else
            return a + multiply(a, b-1);
    }
    else {
        return -multiply(a,-b);
    }
}
int main() {
    int x, y;
    printf("enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("the product is %d",multiply(x,y));
    return 0;
}