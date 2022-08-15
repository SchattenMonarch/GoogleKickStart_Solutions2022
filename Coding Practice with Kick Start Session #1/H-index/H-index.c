/*
Author: Dennis Folz
Date  : 15/08/2022
GitHub: https://github.com/SchattenMonarch

Title: Google Kick Start 2022: Coding Practice with Kick Start Session #1

Problem: H-Index

Description: This program calculates the H-Index from the number of papers and number of citations per paper.

Sample Input
2
3
5 1 2
6
1 3 3 2 2 15

Sample Output
Case #1: 1 1 2
Case #2: 1 1 2 2 2 3
*/


#include <stdio.h>
//brute force method
#define PAPERS 21 //1  1  2  2  2  3  3  3  3  4  4  4  4  4  5  5  5  5  5  5  6 
int cit[PAPERS] = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6 ,6, 6, 6};
int k = 0;
int score(int paper_number, int ctr) {
    int ret = 0, cpy = paper_number;
    for (int i = 0; i < ctr; i++) {
        ret += cit[i] >= paper_number ? 1 : 0;
    }
    return ret;
}

int main()
{
    int h_index = 0, max_papers = 6, tmp = 0;

    for (int i = 1; i <= PAPERS; i++) {
        for (int j = i; j >= h_index; j--) {
            tmp = score(j, i);
            if (tmp > h_index && tmp >=j) {
                h_index = j;
                break;
            }
        }
        printf("%d ", h_index);
    }

    return 0;
}
