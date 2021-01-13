#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("Digite outro número: ");
    scanf("%i", &num2);
    
    if((num1>=50 && num1<=200) && (num2>=-1 && num2<=50)){
        printf("Verdadeiro");
    }
    else{
        printf("Falso");
    }
    
    return 0;
}
