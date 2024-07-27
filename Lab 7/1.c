#include<stdio.h>
int main() {
    char a[100];
    int count=1,i;
    printf("enter a sentence: ");
    gets(a);
    printf("entered sentence is \"%s\"\n",a);
    for(i=0;a[i]!='\0';i++) {
        if(a[i]!=' ' && a[i+1]==' ')
            count++;
    }
    if(a[i-1]==' ')
        count--;
    printf("sentence has %d words",count);
    return 0;
}