/**
 * @file STRING_2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<string.h>

int main(){
    char a[] = "Happiness can be found, even in the darkest of times, if one only remembers to turn on the light";

    for (int i = 0; i < strlen(a); i++ ){
        if (a[i] == 'i'){
            printf("Vi tri cua ki tu 'i' o vi tri thu %d\n ", i + 1);
        }
    }
    return 0 ; 
}