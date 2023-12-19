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
        printf("Bang cuu chuong %d\n",i);
        for (int j =1; j<=10; j++){
            int times = i *j ;
            printf("%d * %d = %d\n", i,j,times);
        }
    }
    return 0 ; 
}