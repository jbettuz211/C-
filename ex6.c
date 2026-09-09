#include <stdio.h>
int main () {

    // Pergutando o valor da idade
    int idade;  // Criando a variavel
    printf("Qual a sua idade?: ");  //Fazendo a pergunta
    scanf("%d", &idade); //Lendo a pergunta

    // Estrutura Condicional
    if (idade >=18){
        printf("%d É maior de idade, você tem: ", idade);   //Printando maior de idade
    }
    else{
        printf("%d É menor de idade, você tem: ", idade); //Printando meno de idade
    }
    return 0;
}