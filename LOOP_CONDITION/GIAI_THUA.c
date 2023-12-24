/**
 * @file GIAI_THUA.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.
 * @date 2023-12-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(){
    int n;
    int result;

    do {
        printf("Nhap so can tinh giai thua: ");
        scanf("%d", &n);

        // Kiểm tra nếu giá trị nhập vào không hợp lệ
        if (n < 0 ) {
            printf("Vui long nhap lai!\n");
        }

    } while (n < 0);
    if (n == 0 ) result = 1; 
    else {
        for (int i = 1; i<=n; i++){
            result *= i ;
        }
    }
    
    printf("giai thua cua %d la %d", n, result);

    return 0 ; 
}