/**
 * @file STRING_1.c
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

//lower all letter 
void lower_letter(char a[30]){
    for (int i = 0; i < strlen(a); i++){
        a[i] = tolower(a[i]);
    }
}
// upper all 
void upper_letter(char a[30]){
    if (!isspace(a[0])) {
        a[0] = toupper(a[0]);
    }
 
    for(int i = 1; i < strlen(a); i++){
        if(a[i-1] == ' ' && !isspace(a[i])){
            a[i] = toupper(a[i]);
        }
    }
}
//delete space 
void delete_space(char *arr, char *result){ 
    int k = 0; 
    for (int i = 0; i < strlen(arr); i++){
        if (arr[i] == ' '){
            result[k] = arr[i];
            k++;
        }
    }
    result[k] ='\0';
}
//add space 
void add_space(char *arr, char *result){
    int k = 0 ; 
    for (int i = 0; i < strlen(arr); i++){
        if (arr[i] != ' '){
            result[k] = arr[i];
            if ( i > 0 && arr[i-1] != ' ' &&  arr[i - 1] != '\0' && arr[i - 1] != '\n' && arr[i] >= 'A' && arr[i] <= 'Z'){
                result[k] = ' ';
                k++;
            }
        }
    }
    result[k] = '\0';
}
int main(){
    char name[30]; 
    char right_name[30];
    printf("PLS ENTER YOUR NAME: \n");
    //get your name
    fgets(name, sizeof(name), stdin);
    lower_letter(name);
    upper_letter(name);
    puts(name);
    delete_space(name, right_name);
    add_space(name, right_name);
    

    return 0 ; 
}