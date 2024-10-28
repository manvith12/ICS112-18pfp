#include <stdio.h>
int main() {
    int r1, c1, r2, c2;

    scanf("%d %d", &r1, &c1);
    int arr[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d %d", &r2, &c2);
    int arr2[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (c1 == r2) {
        int product[r1][c2];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                product[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    product[i][j] += arr[i][k] * arr2[k][j];
                }
            }
        }  
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    } else {       
        printf("nuh uh\n");
    }
    return 0;
}
