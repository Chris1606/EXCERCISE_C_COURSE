/**
 * @file ARRAY_1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(){

    int arr[3][4];
    //get array input
    for(int i = 0; i<3; i++){
        for (int j = 0 ; j<4; j++){
            printf("Nhap arr[%d][%d]", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    // print arr
    for(int i = 0; i<3; i++){
        for (int j = 0 ; j<4; j++){
            printf(" %d ", arr[i][j]);
            
        }
        printf("\n");
    }
    int max = arr[0][0]; // MAX VALUE
    int min = arr[0][0]; // MIN VALUE

    for(int i = 0; i<3; i++){
        for (int j = 0 ; j<4; j++){
            if ( max < arr[i][j]) max = arr[i][j];
            if ( min > arr[i][j]) min = arr[i][j];
        }
    }
    printf ("MAX = %d ", max);
    printf ("MIN = %d ", min);
    return 0 ; 
}