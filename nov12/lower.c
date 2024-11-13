#include <stdio.h>

int lower(int n, int a[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start j from i + 1
            if (a[i][j] != 0) {
                return 0; // Not a lower triangular matrix
            }
        }
    }
    return 1; // It is a lower triangular matrix
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int a[n][n]; // Declare the matrix with size n x n

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (lower(n, a)) {
        printf("The matrix is a lower triangular matrix.\n");
    } else {
        printf("The matrix is not a lower triangular matrix.\n");
    }

    return 0;
}