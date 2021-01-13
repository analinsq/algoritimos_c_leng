#include <stdio.h>

int main(){

    int a, b, c;
    printf("Digite a variável a: ");
    scanf("%i", &a);
    printf("Digite a variávl b: ");
    scanf("%i", &b);
    printf("Digite a variável c: ");
    scanf("%i", &c);

    if(((a>=b) && (a<=c)) || ((a>=c) && (a<=b))){
        printf("Verdadeiro");
    }
    else{
        printf("Falso");
    }

    return 0;
}