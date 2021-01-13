#include <stdio.h>

int main()
{
    int num1, num2, rst;
    char op;
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o operador: ");
    scanf(" %c", &op);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);
    
    switch(op){
        case '+':
            rst=num1+num2;
            printf("%i", rst);
            break;
        
        case '-':
            rst=num1-num2;
            printf("%i", rst);
            break;
            
        case '*':
            rst=num1*num2;
            printf("%i", rst);
            break;
            
        case '/':
            rst=num1/num2;
            printf("%i", rst);
            break;
    }
    
    return 0;
}

