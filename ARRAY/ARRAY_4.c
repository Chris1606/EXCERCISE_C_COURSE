/**
 * @file ARRAY_4.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
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

void SUM_MATRIX(int m, int n, int arr_1[m][n], int arr_2[m][n]) {
    int sum_matrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum_matrix[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    printf("SUM MATRIX:\n");
    display_array(m, n, sum_matrix);
}

void MULTIPLY_MATRIX(int m, int n, int p, int arr_1[m][n], int arr_2[n][p]) {
    int multiply_matrix[m][p];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            multiply_matrix[i][j] = 0;
            for (int r = 0; r < n; r++) {
                multiply_matrix[i][j] += arr_1[i][r] * arr_2[r][j];
            }
        }
    }
    printf("MULTIPLY MATRIX:\n");
    display_array(m, p, multiply_matrix);
}

int main() {
    int m, n;  // size of arr1
    int a, b;  // size of arr2

    printf("VUI LONG NHAP KICH CO CUA MA TRAN 1: ");
    scanf("%d %d", &m, &n);

    printf("VUI LONG NHAP KICH CO CUA MA TRAN 2: ");
    scanf("%d %d", &a, &b);

    int arr_1[m][n];
    int arr_2[a][b];
        
    printf("VUI LONG NHAP CAC PHAN TU CUA MA TRAN 1\n");
    input(m, n, arr_1);
    display_array(m, n, arr_1);

    printf("VUI LONG NHAP CAC PHAN TU CUA MA TRAN 2\n");
    input(a, b, arr_2);  // Fix the input size to match the condition for multiplication
    display_array(a, b, arr_2);
    //ADDITION
    if (m == a && n == b){
        SUM_MATRIX(m, n, arr_1, arr_2);

    } else if ( m != a || n!= b){
        printf("KHONG TON TAI TONG CUA HAI MA TRAN\n");
    }
    //MULTIPLY
    if (n != a) {
    printf("KHONG TON TAI PHEP NHAN MA TRAN\n");
    } else {
        MULTIPLY_MATRIX(m, n, b, arr_1, arr_2);  // Fix the parameters for multiplication
}


    return 0;
}
