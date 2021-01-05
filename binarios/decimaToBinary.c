#include <stdio.h>
#include <math.h>

int main(void) 
{
    int numInserido, bin = 0, resto = 0, posicao = 1;

    printf("Insira um numoero decimal: \n");
    scanf("%d", &numInserido); 

    printf("O valor equivalente de %d em binario seria: ", numInserido);
    while (numInserido)
    {
        resto = numInserido % 2;
        numInserido = numInserido/2;
        bin = bin + resto * posicao;
        posicao = posicao *10;
    }  
    
    printf("%d", bin);
}
    

