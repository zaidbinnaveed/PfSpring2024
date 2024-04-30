#include<stdio.h>

int gcd_loop(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = gcd_loop(a, b);
    printf("GCD using loop: %d\n", result);
    return 0;
}
