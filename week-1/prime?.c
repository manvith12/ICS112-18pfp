//C Program to Check prime or not

#include <stdio.h>

int main()
{
    int num, yes = 1;
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            yes = 0;
            break;
        }
    }

    if (yes)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}
