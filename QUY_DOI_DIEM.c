/**
 * @file QUY_DOI_DIEM.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {
    float n; // Sử dụng kiểu dữ liệu float để chấp nhận giá trị có dấu thập phân

    do {
        printf("Vui long nhap diem thang 10 cua ban: ");
        scanf("%f", &n); // Sửa địa chỉ của biến n

        // Kiểm tra nếu giá trị nhập vào không hợp lệ
        if (n < 0) {
            printf("Vui long nhap lai diem cua ban\n");
        }
    } while (n < 0);

    if (n >= 0 && n < 4) {
        printf("Thang diem 4 cua ban la 0 va duoc diem F ");
    } else if (n >= 4 && n <= 4.9) {
        printf("Thang diem 4 cua ban la 1 va duoc diem D ");
    } else if (n >= 5.0 && n <= 5.4) {
        printf("Thang diem 4 cua ban la 1.5 va duoc diem D+ ");
    } else if (n >= 5.5 && n <= 6.4) {
        printf("Thang diem 4 cua ban la 2.0 va duoc diem C ");
    } else if (n >= 6.5 && n <= 6.9) {
        printf("Thang diem 4 cua ban la 2.5 va duoc diem C+ ");
    } else if (n >= 7.0 && n <= 7.9) {
        printf("Thang diem 4 cua ban la 3.0 va duoc diem B ");
    } else if (n >= 8.5 && n <= 9.4) {
        printf("Thang diem 4 cua ban la 4.0 va duoc diem A ");
    } else if (n >= 9.5 && n <= 10) {
        printf("Thang diem 4 cua ban la 4.0 va duoc diem A+ ");
    }

    return 0;
}
