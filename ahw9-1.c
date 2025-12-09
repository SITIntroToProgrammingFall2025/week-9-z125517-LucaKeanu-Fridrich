#include <stdio.h>
#include <math.h>

int main(void) {
    int r, g, b;
    int cr[5] = {0, 255, 0,   0,   255};
    int cg[5] = {0,   0, 255, 0,   255};
    int cb[5] = {0,   0, 0,   255, 255};
    const char *name[5] = {"Black","Red","Green","Blue","White"};

    printf("Enter R,G,B\n");
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    int idx = 0;
    double best = 1e300;
    for (int i = 0; i < 5; i++) {
        double dr = r - cr[i], dg = g - cg[i], db = b - cb[i];
        double d = sqrt(dr*dr + dg*dg + db*db);
        if (d < best) { best = d; idx = i; }
    }

    printf("The nearest color is %s\n", name[idx]);
    return 0;
}
ahw9-2.c — 1D-Array sortieren (aufsteigend)
c
Code kopieren
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

