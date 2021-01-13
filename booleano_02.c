#include <stdio.h>

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
}