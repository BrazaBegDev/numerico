#include <stdio.h>

int main() {
    int decimal = 0, bin, base = 1, resto, numInserido;
    printf("Insira um valor binario: ");
    scanf("%d", &bin);

    numInserido = bin;
    while (bin != 0) {
        resto = bin % 10;
        decimal = decimal + resto*base;
        bin = bin / 10;
        base = base * 2;
    }

    printf("Decimal equivalent of the bin number %d is: %d", numInserido, decimal);
    return 0;
}
