//Criar um programa em C que exiba os valores numéricos de 5 a 200 - Estrutura do while

#include <stdio.h>

int main(){
    //var da estrutura do while
    int contador= 5;

    //Estrutura do while
    do
    {
        printf("%d\n", contador);
        contador++;
    } while (contador != 201);
    
    return 0;
}