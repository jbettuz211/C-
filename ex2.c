#include <stdio.h>
int main () {

    // Pergutando o valor do número
    int numero;  // Criando a variavel
    printf("Qual o número?: ");  //Fazendo a pergunta
    scanf("%d", &numero); //Lendo a pergunta

    // Estrutura Condicional
    if (numero>20){
        printf("Maior que 20 ");   //Printando
    }
    return 0;
}