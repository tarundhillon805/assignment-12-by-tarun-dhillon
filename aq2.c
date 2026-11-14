#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3;
    float average;
};

int main() {
    struct Student students[100];
    int n, i;
    float highestAverage;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter marks in Subject 1: ");
        scanf("%f", &students[i].marks1);

        printf("Enter marks in Subject 2: ");
        scanf("%f", &students[i].marks2);

        printf("Enter marks in Subject 3: ");
        scanf("%f", &students[i].marks3);

        students[i].average =
            (students[i].marks1 +
             students[i].marks2 +
             students[i].marks3) / 3;
    }

    highestAverage = students[0].average;

    for (i = 1; i < n; i++) {
        if (students[i].average > highestAverage) {
            highestAverage = students[i].average;
        }
    } 

    printf("\n====================================\n");
    printf("Student(s) with Highest Average\n");
    printf("====================================\n");

    for (i = 0; i < n; i++) {
        if (students[i].average == highestAverage) {
            printf("\nRoll Number: %d", students[i].rollNo);
            printf("\nName: %s", students[i].name);
            printf("\nAverage Marks: %.2f\n", students[i].average);
        }
    }

    return 0;
}