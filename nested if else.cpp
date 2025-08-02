#include <stdio.h>

int main() {
    int age, score;
    
    // Taking input from the user
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your score: ");
    scanf("%d", &score);
    
    // Nested if statement
    if (age >= 18) {
        if (score >= 60) {
            printf("You are eligible for the competition.\n");
        }
    }

    return 0;
}
