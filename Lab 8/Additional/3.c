#include<stdio.h>
void toggle(char *c) {
    if(*c>='A' && *c<='Z')
        *c += 'a'-'A';
    else if(*c>='a' && *c<='z')
        *c -= 'a'-'A';
}
int main() {
    int i;
    char s[100];
    printf("enter a sentence: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        toggle(&s[i]);
    printf("toggled sentence: %s",s);
    return 0;
}