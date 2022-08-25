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
