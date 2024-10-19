#include <stdio.h>


int octalToDecimal(int octal) {
    int decimal = 0, base = 1;
    
    while (octal > 0) {
        int lastDigit = octal % 10;
        decimal += lastDigit * base;
        base *= 8;
        octal /= 10;
    }
    
    return decimal;
}


void decimalToHexadecimal(int decimal) {
    char hexadecimal[20];
    int i = 0;

    while (decimal != 0) {
        int remainder = decimal % 16;
        
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        i++;
        decimal /= 16;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int octal;
    
    printf("Enter an octal number: ");
    scanf("%d", &octal);

    int decimal = octalToDecimal(octal);
    decimalToHexadecimal(decimal);

    return 0;
}
