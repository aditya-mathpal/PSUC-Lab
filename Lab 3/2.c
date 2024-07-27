#include<stdio.h>
#include<math.h>
int main() {
    int l_limit, u_limit, p_count, i;
    printf("enter upper and lower limits\n");
    scanf("%d%d",&l_limit, &u_limit);
    int counter = l_limit;
    while(counter<=u_limit) {
        p_count = 0;
        i=sqrt(counter);
        while(i>=2) {
            if(counter%i==0 && counter!=i)
            p_count++;
            i--;
        }
        if(p_count==0)
        printf(" %d ",counter);
        counter++;
    }
    printf("are prime numbers between %d and %d",l_limit,u_limit);
    return 0;
}