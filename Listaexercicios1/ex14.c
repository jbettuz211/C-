//Criar um programa em C que exiba os números pares entre o intervalo de 1 a 20. - Estrutura while

#include <stdio.h>

int main()
{
    // Var da estrutura while
    int contador;
    contador= 2;

    while (contador <= 20)
    {
        printf("%d\n", contador);
        contador= contador + 2;

        
    }

    return 0;
}

