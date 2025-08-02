#include <stdio.h>

int main() {
    int num = 5;
    float result;

    result = num;  // int ko float mein convert kar diya gaya
    printf("Implicit Conversion: %f\n", result);

    return 0;
}
