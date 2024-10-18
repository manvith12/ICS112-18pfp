// loop to type till the entered character
#include <stdio.h>

int main() {
    char chara;
    scanf("%c", &chara);
      for (char ch = 'a'; ch <= chara; ch++) {
        printf("%c ", ch);
    }
}