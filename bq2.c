#include <stdio.h>

#define MAX 100

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int rollNo;
    char name[50];
    float CGPA;
    Date dateOfBirth;
} Student;

/* Function prototypes */
void inputStudent(Student *s);
void displayStudent(const Student *s);
void checkScholarship(const Student *s);

int main() {
    Student students[MAX];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    printf("\n========== Student Details ==========\n");

    for (i = 0; i < n; i++) {
        displayStudent(&students[i]);
        checkScholarship(&students[i]);
    }

    return 0;
}

/* Function to input student details */
void inputStudent(Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNo);

    printf("Enter student name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter CGPA: ");
    scanf("%f", &s->CGPA);

    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d",
          &s->dateOfBirth.day,
          &s->dateOfBirth.month,
          &s->dateOfBirth.year);
}

/* Function to display student details */
void displayStudent(const Student *s) {
    printf("\nRoll Number: %d\n", s->rollNo);
    printf("Name: %s\n", s->name);
    printf("CGPA: %.2f\n", s->CGPA);

    printf("Date of Birth: %02d-%02d-%d\n",
           s->dateOfBirth.day,
           s->dateOfBirth.month,
           s->dateOfBirth.year);
}

/* Function to check scholarship eligibility */
void checkScholarship(const Student *s) {
    if (s->CGPA >= 8.5) {
        printf("Scholarship Status: Eligible\n");
    } else {
        printf("Scholarship Status: Not Eligible\n");
    }
}