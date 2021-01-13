#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    printf("Digite o terceiro número: ");
    scanf("%i", &num3);
    printf("Digite o quarto número: ");
    scanf("%i", &num4);
   
    if((num1>num2) && (num1>num3) && (num1>num4)){
        printf("O maior número é o primeiro número: %i", num1);
    }
    else if((num2>num1) && (num2>num3) && (num1>num4)){
        printf("O maior número é o segundo número: %i", num2);
    }
    else if((num3>num1) && (num3>num2) && (num3>num4)){
        printf("O maior número é o terceiro número: %i", num3);
    }
    else{
        printf("O maior número é o quarto número: %i", num4);
    }
   
   return 0;
}
