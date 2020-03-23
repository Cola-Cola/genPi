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
    on = 0
    in_ = 0
    for i in range(len(xx)):
        if pow(xx[i], 2) + pow(yy[i], 2) < 1:
            in_ += 1
        if pow(xx[i], 2) + pow(yy[i], 2) == 1:
            on += 1
    #print(N_kr, "       ", 4 * N_kr)
    print("PI = ", (4 * (on+in_)) / 10000000)
    print("In = ", in_/100000, "%")
    print("On = ", on/100000, "%")
    print("--- %s seconds ---" % (time.time() - start_time))

