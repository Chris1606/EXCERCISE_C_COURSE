/**
 * @file POINTER_1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(){
    float a, b; 
    float *p, *m; 
    printf("Vui long nhap hai so a va b: ");
    scanf("%f %f", &a, &b);
    p = &a; 
    m = &b; 
    printf("Tong cua %.2f + %.2f = %.2f ", *p, *m, *p+*m); // use *p + *m not *(p+m)
    return 0 ; 
}