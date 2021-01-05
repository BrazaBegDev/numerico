#include <stdio.h>
#include <math.h>


//FUNCTION DECLARATION
double DecFtoBin (double decNum, int k);

int main(void){
    double decNum;

    printf("Enter a decimal number \n");
    scanf("%lf", &decNum);

    double decNum_Converted = DecFtoBin (decNum, -1);

    printf("Binary equivalent of %lf is %lf", decNum, decNum_Converted);
}
    
//FUNCTION IMPLEMENTATION
double DecFtoBin (double decNum, int k){
    double currentNum = decNum * 2, remainder = ((int)currentNum) % 2;

    if (currentNum == 1)
    {
        return remainder * pow(10, k);
    }
    return remainder * pow(10, k) + DecFtoBin (currentNum - remainder, k - 1);
}
