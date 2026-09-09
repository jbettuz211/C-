//Criar um programa em C que exiba os números de 500 a 1. -- Estrutura do while

#include <stdio.h>

int main(){
    //var da estrutura do while
    int contador= 500;

    //Estrutura do while
    do
    {
        printf("%d\n", contador);
        contador--;
    } while (contador != 0);
    
    return 0;
}