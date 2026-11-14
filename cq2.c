#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number numbers[3];
    int i;

    printf("Enter three integer values:\n");

    for (i = 0; i < 3; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i].i);
    }

    printf("\nInteger values in the array:\n");

    for (i = 0; i < 3; i++) {
        printf("numbers[%d].i = %d\n", i, numbers[i].i);
    }

    /*
       The second union element is overwritten
       with a floating-point value.
    */
    numbers[1].f = 7.5f;

    printf("\nAfter overwriting the second element:\n");

    printf("numbers[0].i = %d\n", numbers[0].i);
    printf("numbers[1].f = %.2f\n", numbers[1].f);
    printf("numbers[2].i = %d\n", numbers[2].i);

    return 0;
}