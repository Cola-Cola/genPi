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

    int vnutri = 0, na =0;
    for (int i = 0; i < 10000000; i++) {
        if (pow(x[i], 2) + pow(y[i], 2) < 1)
            vnutri++;
        if (pow(x[i], 2) + pow(y[i], 2) == 1)
            na++;
    }



    res = (double)4 * (vnutri+na) / 10000000;
    double percent_na = (double)na / 100000;
    double percent_vnutri=(double)vnutri/100000;
    printf("Pi = %lf\n",res);
    printf("On: %lf%% \n",percent_na);
    printf("Into: %lf%% \n",percent_vnutri);
    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

    return 0;
}
