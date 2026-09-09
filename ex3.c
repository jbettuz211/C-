#include <stdio.h>
int main () {

    // Pergutando os valores dos números
    int numeroA, numeroB;  // Criando as variaveis
    printf("Digite o primeiro número: ");  //Perguntando primeiro número
    scanf("%d", &numeroA); //Lendo primeiro número
     printf("Digite o segundo número: ");  //Perguntando segundo número
    scanf("%d", &numeroB); //Lendo segundo número

    //Somando as variaveis
    int soma;
    soma= numeroA + numeroB;

    // Estrutura Condicional
    if (numeroA + numeroB > 10){
        printf("%d", soma );   //Printando
    }
    return 0;
}