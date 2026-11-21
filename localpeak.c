#include <stdio.h>

int main() {
    int r, c, a[100][100];
    int i, j, count = 0;
    int flag;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {

            flag = 1;

            if (i > 0 && a[i][j] <= a[i-1][j])
                flag = 0;

            if (i < r-1 && a[i][j] <= a[i+1][j])
                flag = 0;

            if (j > 0 && a[i][j] <= a[i][j-1])
                flag = 0;

            if (j < c-1 && a[i][j] <= a[i][j+1])
                flag = 0;

            if (flag == 1)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}