/**
 * @file STRUCT_1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<stdio.h>
typedef struct sinh_vien{
    char name[30];
    char DOB[10];
    int age; 
    double MSSV;
    double GPA;
    double DRL; 
}sinh_vien;
int main(){
    printf("size of struct: %d", sizeof(sinh_vien));
    return 0 ; 
}