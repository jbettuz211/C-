//Criar um programa em C que exiba os números de 500 a 1. -- Estrutura do while

#include <stdio.h>

int main(){
    //var da estrutura do while
    int contador= 2;

    //Estrutura do while
    do
    {
        printf("%d\n", contador);
        contador= contador+2;
    } while (contador <=20);
    
    return 0;
}