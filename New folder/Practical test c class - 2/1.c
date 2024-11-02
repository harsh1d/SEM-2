// To print all amstrong number under 1000

#include <stdio.h>
#include <math.h>

int count_digits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int is_armstrong(int num) {
    int original_num = num;
    int num_digits = count_digits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, num_digits);
        num /= 10;
    }

    return original_num == sum;
}

int main() {
    printf("Armstrong numbers under 1000:\n");
    for (int i = 1; i < 1000; i++) {
        if (is_armstrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

