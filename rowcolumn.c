#include <stdio.h>

int main() {
    int r, c, a[100][100];
    int i, j, sum;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum = 0;

        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }

        printf("%d ", sum);
    }

    printf("\n");

    for (j = 0; j < c; j++) {
        sum = 0;

        for (i = 0; i < r; i++) {
            sum += a[i][j];
        }

        printf("%d ", sum);
    }

    return 0;
}