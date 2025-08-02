#include <stdio.h>

int main() {
    int marks;
    
    // Taking input from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);
    
    // if-else statement
    if (marks >= 60) {
        printf("You passed.\n");
    } else {
        printf("You failed.\n");
    }

    return 0;
}
