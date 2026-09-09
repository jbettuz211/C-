// Criar um programa em C que exiba o valor do contador que irá variar seu valor de 1 a 25 -- Usando while

#include <stdio.h>

int main()
{
    // Var da estrutura while
    int contador;
    contador= 1;

    while (contador != 26)
    {
        printf("%d\n", contador);
        contador++;

        
    }

    return 0;
}