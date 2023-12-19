/**
 * @file Untitled-1
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
// Quy đổi thang điểm
#include <stdio.h>

int main(){
    float a; 

    printf ("Vui long nhap so dien thang nay: ");
    scanf("%f", &a);
    if ( a>= 0 && a <= 50){
        float fee = 50* 1.678; 
        printf ("Tien dien thang nay cua ban la: %.3f VND", fee);
    } else if ( a>= 51 && a <= 100){
        float fee = 50* 1.678 + 1.734*(a-50);
        printf ("Tien dien thang nay cua ban la: %.3f VND", fee);
    } else if ( a>= 101 && a <= 200){
        float fee = 50* 1.678 + 1.734*50 + 2.014*(a-100);;
        printf ("Tien dien thang nay cua ban la: %.3f VND", fee);
    } else if ( a>= 201 && a <= 300){
        float fee = 50* 1.678 + 1.734*50 + 2.014*100 + 2.536* (a-200);
        printf ("Tien dien thang nay cua ban la: %.3f VND", fee);
    } else if ( a>= 301 && a <= 400){
        float fee = 50* 1.678 + 1.734*50 + 2.014*100 + 2.536*100 + 2.834*(a-300);
        printf ("Tien dien thang nay cua ban la: %.3f VND", fee);
    } else if (a >=  401){
        float fee = 50* 1.678 + 1.734*50 + 2.014*100 + 2.536*100 + 2.834*100 + 2.927*(a-400);
        printf ("Tien dien thang nay cua ban la: %.3f VND", fee);
    }

    return 0 ; 
}