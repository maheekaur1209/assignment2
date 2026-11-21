#include <stdio.h>

int main() {
    int n, a[100][100];
    int i, j, flag = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}