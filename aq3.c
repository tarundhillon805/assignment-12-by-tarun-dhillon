#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int employeeID;
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee employee[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter employee name: ");
        scanf(" %[^\n]", employee[i].name);

        printf("Enter employee ID: ");
        scanf("%d", &employee[i].employeeID);

        printf("Enter salary: ");
        scanf("%f", &employee[i].salary);

        printf("Enter date of joining (day month year): ");
        scanf("%d %d %d",
              &employee[i].joiningDate.day,
              &employee[i].joiningDate.month,
              &employee[i].joiningDate.year);
    }

    printf("\n========== Employee Details ==========\n");

    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", employee[i].name);
        printf("Employee ID: %d\n", employee[i].employeeID);
        printf("Salary: %.2f\n", employee[i].salary);

        printf("Date of Joining: %02d-%02d-%d\n",
               employee[i].joiningDate.day,
               employee[i].joiningDate.month,
               employee[i].joiningDate.year);
    }

    return 0;
}