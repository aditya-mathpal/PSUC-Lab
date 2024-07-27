#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[50];
    int i, j, len, Len;
    printf("Enter a string: ");
    gets(a);
    printf("Enter substring to delete: ");
    gets(b);
    Len = strlen(a);
    len = strlen(b);
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == b[0]) {
            for (j = 0; b[j] != '\0'; j++) {
                if (a[i + j] != b[j])
                    break;
            }
            if (j == len) { // If the substring is found
                for (j = i; j <= Len - len; j++) {
                    a[j] = a[j + len];
                }
                a[j] = '\0'; // Null-terminating the string
                i--; // To recheck the current index for any subsequent occurrences of the substring
            }
        }
    }
    printf("The updated sentence is: %s\n", a);
    return 0;
}