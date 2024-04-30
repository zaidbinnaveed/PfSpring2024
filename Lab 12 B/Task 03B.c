#include<stdio.h>

int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd_recursive(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = gcd_recursive(a, b);
    printf("GCD using recursion: %d\n", result);
    return 0;
}
