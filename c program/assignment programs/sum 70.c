#include <stdio.h>
int main() {
    int n = 5; // Number of rows in the triangle
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}
