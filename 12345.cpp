#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        printf("%d-1\n", i);
        
        for(int j = 1; j <= 5; j++) {
            printf(" 2-%d\n", j);
        }
    }

    return 0;
}

