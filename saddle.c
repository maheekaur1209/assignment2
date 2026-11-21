#include <stdio.h>

int main() {
    int r, c, a[100][100];
    int i, j, k, min, flag, found = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {

            min = 1;

            for (k = 0; k < c; k++) {
                if (a[i][j] > a[i][k]) {
                    min = 0;
                    break;
                }
            }

            if (min == 1) {
                flag = 1;

                for (k = 0; k < r; k++) {
                    if (a[k][j] > a[i][j]) {
                        flag = 0;
                        break;
                    }
                }

                if (flag == 1) {
                    printf("%d %d %d", i, j, a[i][j]);
                    found = 1;
                    return 0;
                }
            }
        }
    }

    if (found == 0) {
        printf("None");
    }

    return 0;
}