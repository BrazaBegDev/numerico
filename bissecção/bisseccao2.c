#include <stdio.h>
#include <math.h>

float funcao(float x){
    return pow(x,3) - x - 4;
}

int main(){
    float a, b, Erro = 0.001, it, c, Errox;
    int i= 0, k;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%f", &a);
    printf("Digite o valor final do intervalo: ");
    scanf("%f", &b);

    it = (log10(b-a) - log10(Erro)) / log10(2);
        
    for(int i=i+1; i <= it +1; i++){
        k = i+0;
        c = (a+b)/2;
  
        Errox = b-a;  

        if(funcao(a)* funcao(c) < 0){
            a = a;
            b = c;
        } else{
            a = c;
            b = b;
        }
    }
 
    printf("Resultado = %.4f: apos %d Iteracoes com 4 casas decimais", c, k);

    return 0;
}