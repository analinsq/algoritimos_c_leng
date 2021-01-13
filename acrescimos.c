#include <stdio.h>

int main()
{
    float salario_at;
    int acres;
    scanf("%f", &salario_at);
   
    if(salario_at<=1000){
        acres=20*salario_at;
        acres/=100;
        salario_at+=acres;
    }
    else if(salario_at>1000 && salario_at<=1500){
        acres=15*salario_at;
        acres/=100;
        salario_at+=acres;
    }
    else if(salario_at>1500 && salario_at<=2000){
        acres=10*salario_at;
        acres/=100;
        salario_at+=acres;
    }
    else if(salario_at>2000){
        acres=5*salario_at;
        acres/=100;
        salario_at+=acres;
    }
   
    printf("%.2f", salario_at);
   
    return 0;
}
