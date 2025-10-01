#include <stdio.h>

int main() {
    int n, i = 0, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    while (i < n) {
        if (i == 0) {
            next = 0;
        } else if (i == 1) {
            next = 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
        i++;
    }
    return 0;
}
