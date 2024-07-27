#include<stdio.h>
int IsPalin(char n[]) {
    int i, len;
    for(len=0;n[len]!='\0';len++);
    for(i=0;i<len/2;i++)
        if(n[i]!=n[len-i-1])
            return 0;
    return 1;
}
int main() {
    char s[100];
    printf("enter a string: ");
    gets(s);
    if(IsPalin(s))
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}