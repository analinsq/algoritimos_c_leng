#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if(numero%3==1 && numero%5==0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
