#include <stdio.h>
int main() {
    char str[100], word[100], unique_words[100][100];
    int i, j, k, l, found;
    printf("enter a string: ");
    gets(str);
    i = 0;
    k = 0;
    while (str[i] != '\0') {
        j = 0;
        while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            word[j++] = str[i++];
        word[j] = '\0';
        if (word[0] != '\0') {
            found = 0;
            for (l = 0; l < k; l++) {
                int m = 0;
                while (unique_words[l][m] != '\0' && word[m] != '\0' && unique_words[l][m] == word[m])
                    m++;
                if (unique_words[l][m] == '\0' && word[m] == '\0') {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                j = 0;
                while (word[j] != '\0') {
                    unique_words[k][j] = word[j];
                    j++;
                }
                unique_words[k][j] = '\0';
                k++;
            }
        }
        if (str[i] != '\0')
            i++;
    }
    printf("updated sentence ");
    for (i = 0; i < k; i++)
        printf("%s ", unique_words[i]);
    return 0;
}