#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Excellent! You got an A grade.\n");
    } else if (marks >= 60) {
        printf("Good job! You got a B grade.\n");
    } else if (marks >= 50) {
        printf("You passed with a C grade.\n");
    } else {
        printf("You failed. Better luck next time!\n");
    }

    return 0;
}
