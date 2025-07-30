#include <stdio.h>
int main() {
    int num ;
    do {
        printf("This will run at least once!\n");
        num++;
    } while(num < 0);
    return 0;
}
