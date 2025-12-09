#include <stdio.h>

int main(void) {
    int A[2][3], B[3][2], C[2][2];
    int i, j, k;

    printf("Enter first matrix (3 x 2) and second matrix (2 x 3)\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &B[i][j]);

    printf("The first matrix you entered is \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("The second matrix you entered is \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) printf("%d ", B[i][j]);
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("The multiplication product of matrix A and matrix B :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}

