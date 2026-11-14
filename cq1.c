#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data;

    data.i = 25;
    printf("Integer value: %d\n", data.i);

    data.f = 7.5f;
    printf("Float value: %.2f\n", data.f);

    data.c = 'A';
    printf("Character value: %c\n", data.c);

    printf("\nSize of union Data: %zu bytes\n", sizeof(data));

    return 0;
}