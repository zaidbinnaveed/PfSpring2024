#include <stdio.h>

void printFibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);

        printFibonacci(n - 1, b, a + b);
    }
}
void printNFibonacci(int n) {
    if (n <= 0) {
        printf("Invalid input!\n");
        return;
    }

    printf("Fibonacci series: ");
    printFibonacci(n, 0, 1);
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);
    printNFibonacci(n);
    return 0;
}
