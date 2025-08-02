#include <stdio.h>
int main() {
    float balance = 1000.0, withdraw;   // assign declarare  x 
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdraw);
    balance -= withdraw;
    printf("Remaining Balance: %.2f\n", balance);
    return 0;
}
