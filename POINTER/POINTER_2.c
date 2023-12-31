/**
 * @file POINTER_2.c
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
    int a, b; 
    int *p, *m; 

    p = &a; // p as the address of a
    m = &b; // m as the address of b
    scanf("%d %d", p, m );    
    // swap
    int temp;    
    temp = *p; 
    *p = *m; 
    *m = temp; 
    printf("Gia tri sau khi da thay doi hai so la %d %d ",*p, *m);
    return 0 ; 
}