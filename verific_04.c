#include <stdio.h>

int main(){

    int a, b;
    printf("Digite o primeiro número: ");
    scanf("%i", &a);
    printf("Digite o segundo número: ");
    scanf("%i", &b);

    if(a%b==0){
        printf("Verdadeiro");
    }
    else{
        printf("Falso");
    }

    return 0;
}