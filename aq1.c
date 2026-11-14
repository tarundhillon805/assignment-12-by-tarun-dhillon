#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3;
};

int main() {
    struct Student s;
    float total, average;
    char grade;

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &s.marks1, &s.marks2, &s.marks3);

    total = s.marks1 + s.marks2 + s.marks3;
    average = total / 3;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n--- Student Record ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Student Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}