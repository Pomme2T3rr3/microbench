#include "../include/algo_pi.h"


double algo_pi_leibniz(uint64_t iterations) {
    double pi = 0;
    double signe = 1;
    double tmp;

    for(int i = 0; i < iterations; i++) {
        tmp = signe / (2*i + 1);
        pi += tmp;
        signe = -signe;
    }

    return pi;
}


/*double algo_pi_montecarlo(uint64_t iterations) {

}
*/
