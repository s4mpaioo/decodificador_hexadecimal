#include <stdio.h>
#include <math.h>
#include "caractere.h"

float func_val(int x, float b) {
    double a0 = 348.11;
    double a1 = -278.007;
    double a2 = 64.9146;
    double a3 = -6.62433;
    double a4 = 0.346464;
    double a5 = -0.0097146;
    double a6 = 0.000138889;
    double a7 = -7.94637e-7;

    return round(a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7));
}