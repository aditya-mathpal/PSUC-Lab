#include<stdio.h>
typedef struct student_record {
    char name[100];
    int m1, m2, m3;
    float avg;
}rec;
int main() {
    rec s[3];
    short i;
    for(i=0;i<3;i++) {
        printf("enter name and marks of all three subjects for student %d: ",i+1);
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].avg = (s[i].m1 + s[i].m2 + s[i].m3)/(float)3;
    }
    short smallPos, j;
    rec temp;
    for(i=0;i<3;i++) {
        smallPos = i;
        for(j=i;j<3;j++)
            if(s[smallPos].avg > s[j].avg)
                smallPos = j;
        temp = s[i];
        s[i] = s[smallPos];
        s[smallPos] = temp;
    }
    for(i=0;i<3;i++)
        printf("Student: %s\nAverage Marks: %.2f\n",s[i].name,s[i].avg);
    return 0;
}