#include <stdio.h>

int main(){

    int num1;
    printf("Digite um número: ");
    scanf("%i", &num1);

    if(num1%3==0){
        printf("Verdadeiro");
    }
    else{
        printf("Falso");
    }

    return 0;
}