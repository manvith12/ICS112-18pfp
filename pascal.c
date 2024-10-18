#include <stdio.h>

int main() {
    int n, m = 1;
    while (1) {
        printf("Enter a positive integer: ");
        if (scanf("%d", &n) == 1 && n > 0) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                m = 1;
                printf("%d ", m);
            } else {
                int temp = m * (i - j + 1);
                m = temp / j;
                printf("%d ", m);
            }
        }
        printf("\n");
    }

    return 0;
}
