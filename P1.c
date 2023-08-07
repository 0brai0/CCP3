#include <stdio.h>

float power(float x, unsigned int n) {
    float result = 1.0;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }

    return result;
}

int main() {
    float x;
    unsigned int n;

    printf("Enter the value of x (float): ");
    scanf("%f", &x);

    printf("Enter the value of n (positive integer): ");
    scanf("%u", &n);

    float result = power(x, n);

    printf("%.2f ^ %u = %.2f\n", x, n, result);

    return 0;
}
