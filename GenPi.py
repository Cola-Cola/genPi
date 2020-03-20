import numpy as np
import random as rnd
import time

if __name__=="__main__":
    start_time = time.time()
    xx = np.empty(10000000)
    yy = np.empty(10000000)
    x = []
    y = []
    for i in range(len(xx)):
        xx[i] = rnd.random()
        yy[i] = rnd.random()
    N_kr = 0
    for i in range(len(xx)):
        if pow(xx[i], 2) + pow(yy[i], 2) <= 1:
            N_kr += 1
    print(N_kr, "       ", 4 * N_kr)
    print((4 * N_kr) / 10000000)
    print("--- %s seconds ---" % (time.time() - start_time))

