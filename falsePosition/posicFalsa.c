#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float funcao(float x){
    return pow(x,3) - x - 4;
}

int main() {
    double a = 0, b = 2, e = 0.03, c;
    int k=0;

    do {
        k++;
        c = ((funcao(a) * b) - (funcao(b) * a)) / (funcao(a) - funcao(b));

        if(funcao(a) * funcao(c) < 0){
            b = c;
        } else{
            a = c;
        }

    } while (fabs(funcao(c)) > e);

    printf("A raiz aproximada e: %.3f, apos %d iteracoes", c, k);
}

//comentario
