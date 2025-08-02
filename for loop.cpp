#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 50) {
        printf("Congratulations! You passed.\n");
    } else {
        printf("Sorry, you failed.\n");
    }

    return 0;
}
