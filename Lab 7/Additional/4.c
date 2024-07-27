#include<stdio.h>
int main() {
    char s[100];
    int c,dig,sum;
    printf("enter a string: ");
    gets(s);
    printf("the entered string is: %s\n",s);
    for(c=dig=sum=0;s[c]!='\0';c++) {
        if(s[c]>='0' && s[c]<='9') {
            dig++;
            sum += s[c]-'0';
        }
    }
    printf("the string has %d characters and %d digits, the sum of the digits is %d",c,dig,sum);
    return 0;
}