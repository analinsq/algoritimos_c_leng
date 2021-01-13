
//Questão 01
/*#include <stdio.h>

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
}*\

//Questão 02
/*#include <stdio.h>

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
}*\

//Questão 03
/*#include <stdio.h>

int main(){
     
     int num1, num2;
     printf("Digite o primeiro número: ");
     scanf("%i", &num1);
     printf("Digite o segundo número: ");
     scanf("%i", &num2);

     printf("%i", num1%num2);

     return 0;
}*\

//Questão 04
/*#include <stdio.h>

int main(){

    int a;
    printf("Digite a: ");
    scanf("%i", &a);

    if(a%2==0){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}*\

//Questão 05
/*#include <stdio.h>

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
}*\

//Questão 06
/*#include <stdio.h>

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
}*\



