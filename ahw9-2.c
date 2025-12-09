#include <stdio.h>

int main(void) {
    int a[5], i, j;

    for (i = 0; i < 5; i++) scanf("%d", &a[i]);

    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
            if (a[j] < a[i]) { int t = a[i]; a[i] = a[j]; a[j] = t; }

    for (i = 0; i < 5; i++) {
        if (i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}

