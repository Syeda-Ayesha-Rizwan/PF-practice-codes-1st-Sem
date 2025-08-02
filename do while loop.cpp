#include <stdio.h>

int main() {
    int i;

    do {
        printf("\nEnter a positive number: ");
        scanf("%d", &i);

        if (i <= 0) {
            printf("Invalid number! Enter a positive number.\n");
        }

    } while (i <= 0);  

    printf("You entered: %d\n", i);

    return 0;
}
