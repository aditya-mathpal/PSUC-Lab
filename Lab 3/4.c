#include<stdio.h>
#include<math.h>
int main() {
    int count=0, p_count=0, c_count=0, num;
    printf("enter numbers to count prime and composite, enter -1 to terminate\n");
    do {
        scanf("%d",&num);
        for(int i=sqrt(num);i>=2;i--) {
            if(num%i==0 && num!=i && num>1)
            count++;
        }
        if(num<=1)
        continue;
        else if(count==0)
        p_count++;
        else
        c_count++;
    }
    while(num!=-1);
    printf("there were %d prime numbers and %d composite numbers entered",p_count,c_count);
    return 0;
}