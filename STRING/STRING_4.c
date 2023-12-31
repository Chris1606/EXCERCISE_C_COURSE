/**
 * @file STRING_4.c
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
#include<ctype.h>

int main() {
    char a[100];
    fgets(a, sizeof(a), stdin);

    for (int i = 0; i < strlen(a); i++) {
        a[i] = toupper(a[i]);
    }
    printf("XAU DUOC VIET HOA \n");
    puts(a);
    for (int i = 0; i < strlen(a); i++) {
        a[i] = tolower(a[i]);
    }
    printf("xau duoc viet thuong \n");
    puts(a);
    return 0;
}
