#include <stdio.h>

int main() {
    int n, m, o;
    n = 2;
    m = 3;
    o = 1;

    int num = 1;
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("%d*%d=%d\n", n, m, n * m);
            break;
        case 2:
            printf("%d+%d=%d\n", n, m, n + m);
            break;
        case 3:
            n = 4;
            m = 6;
            printf("%d+%d=%d\n", n, m, n + m);
            break;
        case 4:
            n = 4;
            m = 5;
            printf("%d/%d=%.1f\n", n, m, (float)n / m);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}