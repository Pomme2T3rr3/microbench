#ifndef BENCH_H
#define BENCH_H

#include <stdint.h>

typedef struct {
    double seconde;
    double op_per_sec;
    double result;
} Result_Bench;

typedef double (*bench_func_t)(uint64_t iterations);

Result_Bench bench_run (bench_func_t func, uint64_t nb_iteration);

void bench_print(Result_Bench result, uint64_t nb_iteration, const char* name);

#endif
