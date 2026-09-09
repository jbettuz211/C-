//Criar um programa em C que exiba os números de 1 a 1000. -- Estrutura while

#include <stdio.h>

int main()
{
    // Var da estrutura while
    int contador;
    contador= 1;

    while (contador != 1001)
    {
        printf("%d\n", contador);
        contador++;

        
    }

    return 0;
}