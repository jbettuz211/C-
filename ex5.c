#include <stdio.h>
int main () {

    // Pergutando os valores das notas
    float notaA, notaB;  // Criando as variaveis
    printf("Digite a primeira nota: ");  //Perguntando primeiro número
    scanf("%f", &notaA); //Lendo primeiro número
     printf("Digite o segunda nota: ");  //Perguntando segundo número
    scanf("%f", &notaB); //Lendo segundo número

    // Fazendo a média
    float media; //Criando a variavel
    media= (notaA + notaB)/2;

    //Aprovado ou desaprovado
    if (media >= 5){
        printf("%f Aprovado com média: ", media);// Aprovado
    }
    else{
        printf("%f Desaprovado com média: ", media);
    }

   return 0;
}