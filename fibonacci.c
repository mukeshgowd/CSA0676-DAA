#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2)); }}
int main() {
    int terms;
    int i;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci sequence: ");
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));}
    printf("\n");
    return 0;
}
