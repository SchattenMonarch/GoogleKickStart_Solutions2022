/*
author: Dennis Folz
github profile : https://github.com/SchattenMonarch
date:   21.08.22

program: google kick start Round E: Coloring Game
link: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb0f5/0000000000ba856a

Sample

Sample Input
    3
    1
    3
    6
Sample Output
    Case #1: 1
    Case #2: 1
    Case #3: 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
    u_int8_t T = 0;
    u_int64_t N = 0;
    scanf("%d", &T);
    
    for(u_int8_t i = 1; i<= T; i++){
        printf("Case #%d: ", i);
        scanf("%ld", &N);
        printf("%ld\n", 1 + (u_int64_t)((N-1)/5));
    }
    return 0;
}