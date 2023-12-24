#include <stdio.h>

void input(int m, int n, int arr[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap arr[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display_array(int m, int n, int arr[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;  // size of arr1
    int a, b;  // size of arr2

    printf("VUI LONG NHAP KICH CO CUA MA TRAN 1: ");
    scanf("%d %d", &m, &n);

    printf("VUI LONG NHAP KICH CO CUA MA TRAN 2: ");
    scanf("%d %d", &a, &b);

    if (n != a) {
        printf("KHONG THE NHAN MA TRAN\n");
        return 0;
    }

    int arr_1[m][n];
    int arr_2[a][b];
    int multiply_matrix[m][b];

    input(m, n, arr_1);
    display_array(m, n, arr_1);

    input(a, b, arr_2);
    display_array(a, b, arr_2);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            multiply_matrix[i][j] = 0;
            for (int r = 0; r < n; r++) {
                multiply_matrix[i][j] += arr_1[i][r] * arr_2[r][j];
            }
        }
    }

    printf("Matrix Multiplication Result:\n");
    display_array(m, b, multiply_matrix);

    return 0;
}
