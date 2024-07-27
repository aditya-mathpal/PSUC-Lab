#include<stdio.h>
int main() {
    int i;
    char a[100];
    printf("enter a string: ");
    gets(a);
    printf("entered string is \"%s\"\n",a);
    for(i=0;a[i]!='\0';i++) {
        if(a[i]>='A' && a[i]<='Z')
            a[i]+=32;
        else if(a[i]>='a' && a[i]<='z')
            a[i]-=32;
    }
    printf("updated string is \"%s\"\n",a);
    return 0;
}