#define _CRT_SECURE_NO_WARNINGS
/*
author: Dennis Folz
github profile : https://github.com/SchattenMonarch
date:   23.08.2022
last update: 24.08.2022
program: google kick start Round E: Pizza Delivery
link: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb0f5/0000000000ba86e6
Sample
Test Set 1: P = 0

Sample Input
2
3 0 1 1 2
+ 1
- 2
+ 3
/ 4
3 0 1 2 3
- 2
- 2
- 2
- 2

Sample Output
Case #1: 3
Case #2: 0

Test Set 2: 0 <= P <= 10

Sample input
3
3 1 3 1 3
+ 4
- 2
* 1
/ 4
1 2 4
2 2 1 1 2
+ 2
+ 3
* 2
* 1
1 1 4
2 2 1
3 1 2 1 3
+ 1
* 1
- 3
/ 4
2 2 2

Sample Output

Case #1: 8
Case #2: IMPOSSIBLE
Case #3: 1

*/

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NO_OF_CUSTOMERS 10u
#define ADA 0u

typedef struct {
    int row;
    int column;
    int coins;
}customer;

//index 0 will be reserved for ADA in order to track her current position and no. of coins
customer cstmr[MAX_NO_OF_CUSTOMERS + 1] = { 0 };
int grid_size = 0, no_of_pizzas = 0, minutes = 0;

//variables for the toll-function
char north_opd = '\0', east_opd = '\0', west_opd = '\0', south_opd = '\0';
int north_kd = 0, east_kd = 0, west_kd = 0, south_kd = 0;

void solve(int tc);
void clear_stdin(void);
void get_input_data(void);

int main(void) {
    int test_cases = 0;
    //read first input line
    while (scanf("%d", &test_cases) != 1) {
        clear_stdin();
    }
    
    for (int i = 1; i <= test_cases; i++) {
        solve(i);
    }
    return 0;
}

void solve(int tc) {
    get_input_data();
    printf("Case #%d: ", tc);
    //do something ...
    return;
}

void get_input_data(void) {
    //read first input line for each test case
    scanf("%d %d %d %d %d", &grid_size, &no_of_pizzas, &minutes, &cstmr[ADA].row, &cstmr[ADA].column);
    clear_stdin();
    //read denoting operators (+ - * /) and numbers for each direction
    scanf("%c %d %c %d %c %d %c %d", &north_opd, &north_kd, &east_opd, &east_kd, &west_opd, &west_kd, &south_opd, &south_kd);
    clear_stdin();
    for (int i = 1; i <= no_of_pizzas; i++) {
        //read the coordinates and no. of coins for each customer
        scanf("%d %d %d", &cstmr[i].row, &cstmr[i].column, &cstmr[i].coins);
        clear_stdin();
    }
}

// after scanf() a '\n' remains in stdin which needs to be cleared, so that it won't be wrongly read at the next scanf("%c"..);
void clear_stdin(void) {
    while (getchar() != '\n');
}
