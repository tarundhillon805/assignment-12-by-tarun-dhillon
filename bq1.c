 #include <stdio.h>

typedef struct {
    int rollNo;
    char name[50];
    float CGPA;
} Student;

int main() {
    Student students[3];
    int i;

    printf("Enter details of three students:\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter student name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &students[i].CGPA);
    }

    printf("\n========== Student Records ==========\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("CGPA: %.2f\n", students[i].CGPA);
    }

    return 0;
}