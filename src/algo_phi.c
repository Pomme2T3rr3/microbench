#include "../include/algo_phi.h"



double algo_phi_fibo(uint64_t iterations) {
    double phi;
    double a = 1;
    double b = 1;
    int tmp;

    for (int i = 0; i < iterations; i++) {
        tmp = a + b;
        a = b;
        b = tmp;
    }
    phi = b / a;

    return phi;
}
