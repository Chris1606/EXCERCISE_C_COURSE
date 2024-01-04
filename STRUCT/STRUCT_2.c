/**
 * @file STRUCT_2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[30];
    int age;
    char SDT[11];
    char CCCD[12];
    char address[100];
} Person;

typedef struct Worker {
    Person person; // Lấy dữ liệu từ struct Person
    char company_name[50];
    char chuc_danh[50];
} Worker;

int main() {
    Worker worker;

    printf("Vui long nhap ten nhan vien: ");
    fgets(worker.person.name, sizeof(worker.person.name), stdin);  
    puts(worker.person.name);

    

    return 0;
}
