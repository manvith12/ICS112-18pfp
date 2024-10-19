#include <stdio.h>

int binaryToDecimal(int m) {
    int n = 0, o = 0, remainder;
    int powerOfTwo = 1; 

    while (m != 0) {
        remainder = m % 10;
        m /= 10;
        n += remainder * powerOfTwo;
        powerOfTwo *= 2; 
    }

    return n;
}

int main() {
    int m;
    scanf("%d",&m);
    printf("%d\n",binaryToDecimal(m));
    return 0;
}