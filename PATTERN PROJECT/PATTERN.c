#include <stdio.h>

int main() {
    int choice, i, j, n;

    printf("PATTERN LOGIC TOOL\n");
    printf("------------------\n");
    printf("1. Number Triangle\n");
    printf("2. Inverted Number Triangle\n");
    printf("3. Square Number Pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of rows: ");
    scanf("%d", &n);

    switch(choice) {
        case 1:
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 2:
            for(i = n; i >= 1; i--) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= n; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
