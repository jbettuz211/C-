//Criar um programa em C que exiba os valores numéricos de 5 a 200 - Estrutura while

#include <stdio.h>

int main()
{
    // Var da estrutura while
    int contador;
    contador= 5;

    while (contador != 201)
    {
        printf("%d\n", contador);
        contador++;

        
    }

    return 0;
}