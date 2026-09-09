//Criar um programa em C que receba 5 números inteiros seu sucessor e seu antecessor -- Estrutura for

#include <stdio.h>

int main(){

    //Estrutura for
    for (int sucessor=0, antecessor; sucessor= sucessor+5, antecessor= antecessor-5; sucessor= sucessor++, antecessor--)
    {
        printf("Digite um número: ");
        scanf("%d", &sucessor; "%d", antecessor);
        printf("O sucessores desse número são: %d e os antecessores %d", sucessor, antecessor);
    }

return 0;

}

// Parei aqui, refazer