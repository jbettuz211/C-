#include <stdio.h>
int main () {

    // Pergutando sobre o sexo
    char sexo;  // Criando a variavel
    printf("Qual o seu sexo: ");  //Fazendo a pergunta
    scanf("%s", &sexo); //Lendo a pergunta

    // Estrutura Condicional
    if (sexo== 'f'){
        printf("Feminino ");   //Printando feminino
    }
    return 0;
}