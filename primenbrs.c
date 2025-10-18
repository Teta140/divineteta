#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) { // 0 and 1 are not prime numbers
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;

    printf("Enter the upper limit (N) to find prime numbers: ");
    scanf("%d", &N);

    printf("Prime numbers up to %d are: ", N);

    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
