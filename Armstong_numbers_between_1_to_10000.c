#include <stdio.h>
#include <math.h>

int main() {
    int i, temp, rem, digits, sum;

    printf("Armstrong numbers between 1 and 10000 are:\n");

    for (i = 1; i <= 10000; i++) {
        digits = 0;
        temp = i;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        sum = 0;
        temp = i;
        while (temp > 0) {
            rem = temp % 10;
            sum += round(pow(rem, digits));
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}