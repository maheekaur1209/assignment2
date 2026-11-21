#include <stdio.h>

int main() {
    int n, a[100];
    int min, diff;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0] - a[1];

    if (min < 0) {
        min = -min;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            diff = a[i] - a[j];

            if (diff < 0) {
                diff = -diff;
            }

            if (diff < min) {
                min = diff;
            }
        }
    }

    printf("%d", min);

    return 0;
}