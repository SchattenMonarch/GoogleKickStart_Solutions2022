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
	//get number of test cases
    scanf("%d", &test_cases);
	
	//loop through the test cases
    for (int i = 1; i <= test_cases; i++) {
		//get the length of the following palindrome P
        scanf("%d", &length);
		//allocate memory for the palindrome P
        str = (char*)malloc((length + 1) * sizeof(char));
		//allocate memory for the searched smallest palindrome Q (size <=P)
        smallest_pal = (char*)malloc((length + 1) * sizeof(char));
		//allocate memory for the concatenated string PQ
        cat_str = (char*)malloc((2 * length + 1) * sizeof(char));
		
		//get the palindrome P
        scanf("%s", str);
		//copy the P into cat_str, which will be the concatenated string PQ
        strcpy(cat_str, str);
        printf("Case #%d: ", i);
        for (int j = 0; j <= length; j++) {
			//build Q
            smallest_pal[j] = str[j];
            smallest_pal[j + 1] = '\0';
			//build PQ
            cat_str[length + j] = str[j];
            cat_str[length + j + 1] = '\0';
			//limit the brute-force approach with N % |Q|. 
            if(length % (j + 1) == false){
				//check if Q AND PQ are both palindromes
                if (is_palindrome(smallest_pal, j + 1) && is_palindrome(cat_str, length + j + 1)) {
					//found the smallest palindrome Q -> print it and go to the next test case
                    printf("%s\n", smallest_pal);
                    break;
                }
            }
        }
		//free the allocated memory
		//TODO: only free the memory and allocate it new, if the length in the next cycle exeeds the previous length
		//also loop until str[j] != '\0' in case the length of the next palindrome will be shorter.
        free(str);
        free(cat_str);
        free(smallest_pal);
    }
    return 0;
}

//checks if a string is a palindrome or not
bool is_palindrome(char* str, int len) {
	//since a palindrome is symmetric to the center, we just need to check whether all elements with the same
	//distance to the center are equal. If only one pair is different it's not a palindrome.
    for(int i = 0; i < len/2; i++)
       if (str[0+i] != str[len - i - 1]) return false;
    
    return true;
}
