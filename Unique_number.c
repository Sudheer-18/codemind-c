#include <stdio.h>

int isUniqueNumber(int number) {
    int digits[10] = {0};  // Array to store the count of each digit
    int digit;

    while (number != 0) {
        digit = number % 10;  // Get the last digit
        digits[digit]++;     // Increment the count for the digit
        number /= 10;        // Remove the last digit
    }

    for (int i = 0; i < 10; i++) {
        if (digits[i] > 1) {
            return 0;  // Number is not unique
        }
    }

    return 1;  // Number is unique
}

int main() {
    int number;

    scanf("%d", &number);

    if (isUniqueNumber(number)) {
        printf("Unique Number");
    } else {
        printf("Not Unique Number");
    }

    return 0;
}
