#include <stdio.h>

int main()
{
    int num1, num2, rest;
    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("Digite outro número: ");
    scanf("%i", &num2);
    
    rest=num1%num2;
    rest*=num1;
    
    if(rest%2==0){
        printf("%i", rest/2);
    }
    else{
        printf("Não é par :(");
    }
    
    return 0;
}
