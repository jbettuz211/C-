//Criar um programa em C que exiba os números pares entre o intervalo de 1 a 20. - Estrutura for

#include <stdio.h>

int main(){

    //Estrutura for
    for (int contador=2; contador<=20; contador = contador+2)
    {
        printf("%d\n", contador);
    }

return 0;

}