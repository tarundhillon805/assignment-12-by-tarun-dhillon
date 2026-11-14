#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3;
    char grade;
};

/* Function prototypes */
void displayStudent(struct Student s);
float totalMarks(struct Student s);
void updateGrade(struct Student *s, char newGrade);

int main() {
    struct Student student;
    float total;
    char newGrade;

    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);

    printf("Enter student name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f",
          &student.marks1,
          &student.marks2,
          &student.marks3);

    printf("Enter current grade: ");
    scanf(" %c", &student.grade);

    printf("\n--- Passing Structure by Value ---\n");
    displayStudent(student);

    total = totalMarks(student);
    printf("\nTotal Marks: %.2f\n", total);

    printf("\nEnter new grade: ");
    scanf(" %c", &newGrade);

    printf("\n--- Passing Structure by Reference ---\n");
    updateGrade(&student, newGrade);

    printf("\nUpdated Student Details:\n");
    displayStudent(student);

    return 0;
}

/* Structure passed by value */
void displayStudent(struct Student s) {
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks 1: %.2f\n", s.marks1);
    printf("Marks 2: %.2f\n", s.marks2);
    printf("Marks 3: %.2f\n", s.marks3);
    printf("Grade: %c\n", s.grade);
}

/* Structure passed by value */
float totalMarks(struct Student s) {
    return s.marks1 + s.marks2 + s.marks3;
}

/* Structure passed by reference */
void updateGrade(struct Student *s, char newGrade) {
    s->grade = newGrade;
}