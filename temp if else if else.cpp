#include <stdio.h>

int main() {
    int temperature;
    
    // Taking input from the user
    printf("Enter the temperature: ");
    scanf("%d", &temperature);
    
    // if-else if-else statement
    if (temperature > 40) {
        printf("It's very hot outside.\n");
    } else if (temperature >= 30) {
        printf("It's a warm day.\n");
    } else {
        printf("It's a cool day.\n");
    }

    return 0;
}
