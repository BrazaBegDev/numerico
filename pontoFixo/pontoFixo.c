#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double fx, x = 0.5;
    int i;

    fx = pow(x,3) - (9.0 * x) + 3.0;

    do {
        fx = pow(x, 3) - (9.0 * x) + 3.0;

        //Para quando o resultado de fx e menor que o erro
        if (fabs(fx) <= 0.0005) {
            printf("\n Raiz utilizada: %f, valor obtido: %f\n\n", x, fx);
            break;
        }

        //substitui o valor de x baseado na funcao fi
        x = (pow(x, 3) + 3.0) / 9.0;

    } while (fabs(fx) > 0.0005);

    return 0;

}