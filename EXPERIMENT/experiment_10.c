#include <stdio.h>

int main() {
    int ch;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1 +\n2 -\n3 *\n4 /\n");
    printf("Choose operation: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1: printf("Result = %d", a + b); break;
        case 2: printf("Result = %d", a - b); break;
        case 3: printf("Result = %d", a * b); break;
        case 4: printf("Result = %d", a / b); break;
        default: printf("Wrong choice");
    }

    return 0;
}
