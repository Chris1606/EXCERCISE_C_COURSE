/**
 * @file ARRAY_2.c
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

    int value; // value need to be found
    printf ("VUI LONG NHAP GIA TRI CAN TIM: ");
    scanf("%d", &value);

    int flag = 0; // flag to check not found
   
    for(int i = 0; i<3; i++){
        for (int j = 0 ; j<4; j++){
            if (value == arr[i][j]){
                flag += 1; 
                printf("Gia tri can tim nam o arr[%d][%d]\n", i+1, j+1);
            }
        }
    }
    if(flag == 0 ) printf ("NOT FOUND");

    return 0 ; 
}