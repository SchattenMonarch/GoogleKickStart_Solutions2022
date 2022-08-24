#define _CRT_SECURE_NO_WARNINGS
/*
author: Dennis Folz
github profile : https://github.com/SchattenMonarch
date:   23.08.2022
last update: 24.08.2022
program: google kick start Round E: Matching Palindrome
link: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb0f5/0000000000ba82c5
Sample

Sample Input
3
4
abba
4
cccc
6
cdccdc

Sample Output
Case #1: abba
Case #2: c
Case #3: cdc
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char* str, int len);

int main()
{
    int test_cases = 0, length = 0;
    char* str = NULL, * smallest_pal = NULL, * cat_str = NULL;
    scanf("%d", &test_cases);

    for (int i = 1; i <= test_cases; i++) {
        scanf("%d", &length);
        str = (char*)malloc((length + 1) * sizeof(char));
        smallest_pal = (char*)malloc((length + 1) * sizeof(char));
        cat_str = (char*)malloc((2 * length + 1) * sizeof(char));

        scanf("%s", str);
        strcpy(cat_str, str);
        printf("Case #%d: ", i);
        for (int j = 0; j <= length; j++) {
            smallest_pal[j] = str[j];
            smallest_pal[j + 1] = '\0';
            cat_str[length + j] = str[j];
            cat_str[length + j + 1] = '\0';
            if(length%(j+1) == false){
                if (is_palindrome(smallest_pal, j + 1) && is_palindrome(cat_str, length + j + 1)) {
                    printf("%s\n", smallest_pal);
                    break;
                }
            }
        }
        free(str);
        free(cat_str);
        free(smallest_pal);
    }
    return 0;
}

bool is_palindrome(char* str, int len) {
    for(int i = 0; i < len/2; i++)
       if (str[0+i] != str[len - i - 1]) return false;
    
    return true;
}
