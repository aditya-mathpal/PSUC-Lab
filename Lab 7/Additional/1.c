#include <stdio.h>
int main() {
    char a[100], b[50];
    int i, j, len, Len;
    printf("enter a string: ");
    gets(a);
    printf("enter substring to search: ");
    gets(b);
    for(Len=0;a[Len]!='\0';Len++);
    for(len=0;b[len]!='\0';len++);
    printf("the substring is present at position(s) ");
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == b[0]) {
            for (j = 0; b[j] != '\0'; j++) {
                if (a[i + j] != b[j])
                    break;
            }
            if (j == len)
                printf("%d ",i+1);
        }
    }
    return 0;
}