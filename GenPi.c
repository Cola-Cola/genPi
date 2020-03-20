#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
double x [10000000];
double y [10000000];

int main() {
    clock_t tStart = clock();
    

    double res = 0.0;
    printf("array range is %d \n", 10000000);
        srand(time(NULL));
    for (int i = 0; i < 10000000; i++) {
        x[i] = (double)rand() / (double)RAND_MAX;
        y[i] = (double)rand() / (double)RAND_MAX;
    }
    printf("succesfully filled! \r\n");

    int n_kr = 0;
    for (int i = 0; i < 10000000; i++)
        if (pow(x[i], 2) + pow(y[i], 2) <= 1)
            n_kr++;

    res = (double)4 * n_kr / 10000000;
    printf("Pi = %lf\n",res);
    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

    return 0;
}
