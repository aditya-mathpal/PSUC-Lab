#include<stdio.h>
#include<conio.h>
int main() {
    printf("enter your password: ");
    while(getch()!='\r')
        printf("*");
    return 0;
}