#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int T = 0, N = 0, M = 0;
    unsigned int tmp = 0, candiesTotal = 0, candiesLeft = 0;
    unsigned int C[1000];
    scanf("%i", &T);

    for (int j = 1; j <= T; j++) {
        scanf("%i %i", &N, &M);

        for (int i = 0; i < N; i++) {
            scanf("%i", &tmp);
            C[i] = tmp;
            candiesTotal += tmp;
        }
        candiesLeft = candiesTotal - candiesTotal / M * M;
        candiesTotal = 0;
        printf("Case #%i: %i\n", j, candiesLeft);
    }
    return 0;
}
