/**
 * @file BANG_CUU_CHUONG.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <math.h>
int main(){
    printf("Bang cuu chuong\n");
    for (int i = 1; i<=10; i++){
        for (int j =1; j<=5; j++){
            int times = i *j ;
            printf("%d * %d = %d\t", j,i,times);
        }
        printf("\n");
    } 
    
    printf("\n");

    for (int i = 1; i<=10; i++){
        for (int j =6; j<=10; j++){
            int times = i *j ;
            printf("%d * %d = %d\t", j,i,times);
        }
        printf("\n");
    } 
    return 0 ; 
}