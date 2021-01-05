#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float fx, fdevx;
    double x, xn, x0 = 0.5;

    x = x0;

    do {
        x = xn;
        fx = pow(x,3) - 9*x + 3;
        fdevx = 3*pow(x,2) - 9;
        xn = x - (fx/fdevx);

        fdevx = 3*pow(xn,2) - 9;

        printf("\n xn = %f, fx = %f \n", xn, fx);

    } while (fabs(fx) > 0.0001);

    printf("A raiz aproximada e: %f", xn);
}