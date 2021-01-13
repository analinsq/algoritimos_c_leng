//QUESTÃO 01
/*#include <stdio.h>

int main(){

int num, i;
scanf("%i", &num);

// Usei um "for"" invertido para faze uma espécie de contagem decrescente
for (i=1; num>0; num--){
    i=i*num;
}
printf("%i", i);
return 0;
}*/

//QUESTÃO 02
/*#include <stdio.h>

int main(){

    int num;
    scanf("%i", &num);

    if(num%4==0){
        printf("Não é primo");
    }
    else{
        printf("É primo");
    }
    return 0;
    }*/

//QUESTÃ0 03

/*#include <stdio.h>

int main(){
int result, i;
result=0;
for(i=0; i<=1000; i++){
    if((i%2==0) && (i%5==0) && (i%6!=0)){
        result++;
    }
}
printf("%i\n", result);
return 0;
}*/

//QUESTÃO 04

/*#include <stdio.h>

int main(){

    int num;
    float r, i;
    scanf("%i", &num);

    for(i=1; i<num+1; i++){
        r+=1/i;
        //printf("%f\n", r);
    }
    printf("%.2f", r);
    return 0;
}*/

//QUESTÃO 05

/*#include <stdio.h>

int main(){

    int n, exp, result=1;
    scanf("%i", &n);
    scanf("%i", &exp);

    for(int i=1; i<=exp; i++){
        result=result*n;
    }
    printf("%i", result);

    return 0;
}*/

//QUESTÃO 06

/*#include <stdio.h>

int main(){

    int n;
    scanf("%i", &n);

    for(int i=0; i<n+1; i++){
        if(i*i==n){
            return printf("Verdadeiro");
        }
    }
    printf("Falso");
    return 0;
}*/

//QUESTÃO 07

#include <stdio.h>

int main(){

    int n, cont=1;
    scanf("%i", &n);

    for(int i=1; i<=n; i++){
        int var=1;
        for(int j=1; j<=i; j++){
            var=var*2;
        }
        cont=cont+var;
    }
    printf("%i", cont);

    return 0;
}









