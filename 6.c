#include <stdio.h>

int main() {
    printf("Even numbers between 100 and 200:\n");
    for (int i = 100; i <= 200; i += 2) {
        printf("%d ", i);
    }
    printf("\n"); // Add a newline for better formatting
    return 0;
}