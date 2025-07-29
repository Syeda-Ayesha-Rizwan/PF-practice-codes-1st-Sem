#include <stdio.h>

// Step 1: Function Declaration
int add(int a, int b);

int main() {
    // Step 3: Function Call
    int result = add(5, 3);
    printf("Result is: %d", result);
    return 0;
}

// Step 2: Function Definition
int add(int a, int b) {
    return a + b;
}

