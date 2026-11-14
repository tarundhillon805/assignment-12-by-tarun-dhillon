#include <stdio.h>

struct Employee {
    int employeeID;

    union {
        int hourly_rate;
        float monthly_salary;
    };
};

int main() {
    struct Employee employee;

    printf("Enter employee ID: ");
    scanf("%d", &employee.employeeID);

    printf("Enter monthly salary: ");
    scanf("%f", &employee.monthly_salary);

    printf("\n========== Employee Details ==========\n");
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Monthly Salary: %.2f\n", employee.monthly_salary);

    return 0;
}