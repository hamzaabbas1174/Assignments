#include <stdio.h>

int isprime(int num);

int main() {
    int number, tryAgain = 1;

    while (tryAgain) {
        printf("Enter a number between 2 and 100: ");
        scanf("%d", &number);

        if (number < 2 || number > 100) {
            printf("Number out of range, press 1 to try again: ");
            scanf("%d", &tryAgain);
        } else {
            int result = isprime(number);

            if (result == 1) {
                printf("%d is a prime number.\n", number);
            } else {
                printf("%d is not a prime number.\n", number);
            }

            tryAgain = 0;
        }
    }

    return 0;
}

int isprime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}
